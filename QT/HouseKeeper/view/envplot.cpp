#include <qapplication.h>
#include <qlayout.h>
#include <qlabel.h>
#include <qpainter.h>
#include <qwt_plot_layout.h>
#include <qwt_plot_curve.h>
#include <qwt_scale_draw.h>
#include <qwt_scale_widget.h>
#include <qwt_legend.h>
#include <qwt_legend_item.h>
#include <qwt_plot_canvas.h>
#include "envplot.h"
#include <QPen>
#include <QDebug>

class TimeScaleDraw: public QwtScaleDraw
{
public:
    TimeScaleDraw(const QTime &base):
        baseTime(base)
    {
    }
    virtual QwtText label(double v) const
    {
        QTime upTime = baseTime.addSecs((int)v);
        return upTime.toString();  
    }
private:
    QTime baseTime;
};

class Background: public QwtPlotItem
{
public:
    Background()
    {
        setZ(0.0);
    }

    virtual int rtti() const
    {
        return QwtPlotItem::Rtti_PlotUserItem;
    }

    virtual void draw(QPainter *painter,
        const QwtScaleMap &, const QwtScaleMap &yMap,
        const QRectF &rect) const
    {
        QColor c(Qt::white);
        QRectF r = rect;

        for ( int i = 100; i > 0; i -= 10 )
        {
            r.setBottom(yMap.transform(i - 10));
            r.setTop(yMap.transform(i));
            painter->fillRect(r, c);

            c = c.dark(110);
        }
    }
};

class CpuCurve: public QwtPlotCurve
{
public:
    CpuCurve(const QString &title):
        QwtPlotCurve(title)
    {
        setRenderHint(QwtPlotItem::RenderAntialiased);
    }

    void setColor(const QColor &color)
    {
        QColor c = color;
        c.setAlpha(150);

        setPen(c);
    }
};

CpuPlot::CpuPlot(QWidget *parent):
    QwtPlot(parent),
    dataCount(0)
{
    setAutoReplot(false);  

    canvas()->setBorderRadius( 10 );

     plotLayout()->setAlignCanvasToScales(true);

    QwtLegend *legend = new QwtLegend; 
    legend->setItemMode(QwtLegend::CheckableItem);
    insertLegend(legend, QwtPlot::RightLegend);

    
    setAxisScale(QwtPlot::xBottom, 0, HISTORY);
    setAxisLabelAlignment(QwtPlot::xBottom, Qt::AlignLeft | Qt::AlignBottom);

    /*
     In situations, when there is a label at the most right position of the
     scale, additional space is needed to display the overlapping part
     of the label would be taken by reducing the width of scale and canvas.
     To avoid this "jumping canvas" effect, we add a permanent margin.
     We don't need to do the same for the left border, because there
     is enough space for the overlapping label below the left scale.
     */

    QwtScaleWidget *scaleWidget = axisWidget(QwtPlot::xBottom);
    const int fmh = QFontMetrics(scaleWidget->font()).height();
    scaleWidget->setMinBorderDist(0, fmh / 2);

    setAxisTitle(QwtPlot::yLeft,tr("tem[oC],hum[%]"));
    setAxisScale(QwtPlot::yLeft, 0, 100);

    Background *bg = new Background();     
    bg->attach(this);

    QPen p;
    p.setWidth(2);
    p.setColor(Qt::red);
    CpuCurve *curve;
    curve = new CpuCurve("Temp");
   
    curve->setPen(p);
    curve->attach(this);
    data[temperature].curve = curve;


    curve = new CpuCurve("Hum");
    p.setWidth(2);
    p.setColor(Qt::blue);
    curve->setPen(p);
    curve->setZ(curve->z() - 1);
    curve->attach(this);
    data[humidity].curve = curve;

    showCurve(data[temperature].curve, true);
    showCurve(data[humidity].curve, true);

    for ( int i = 0; i < HISTORY; i++ )
        timeData[HISTORY - 1 - i] = i;

    (void)startTimer(1000); // 1 second

    connect(this, SIGNAL(legendChecked(QwtPlotItem *, bool)),
        SLOT(showCurve(QwtPlotItem *, bool)));
}

void CpuPlot::timerEvent(QTimerEvent *)
{
    for ( int i = dataCount; i > 0; i-- )
    {
        for ( int c = 0; c < NEnvData; c++ )
        {
            if ( i < HISTORY )
                data[c].data[i] = data[c].data[i-1];
        }
    }
   
   setAxisTitle(QwtPlot::xBottom, " System Uptime"+ QTime::currentTime().toString("hh:mm:ss"));

    if ( dataCount < HISTORY )
        dataCount++;

    setAxisScale(QwtPlot::xBottom,
        timeData[HISTORY - 1], timeData[0]);    

     for ( int c = 0; c < NEnvData; c++ )
     {
        data[c].curve->setRawSamples(
         timeData, data[c].data, dataCount);
     }

    replot();
}

void CpuPlot::showCurve(QwtPlotItem *item, bool on)
{
    item->setVisible(on);
    QWidget *w = legend()->find(item);
    if ( w && w->inherits("QwtLegendItem") )
        ((QwtLegendItem *)w)->setChecked(on);
    
    replot();
}
void CpuPlot::setTemp(double temp)
{
    data[temperature].data[0] = temp;
    qDebug()<<"temp:"<<temp;
}
void CpuPlot::setHum(double hum)
{
    data[humidity].data[0] = hum;
    qDebug()<<"hum :"<<hum;

}
