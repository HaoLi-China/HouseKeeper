#include <qwt_plot.h>
//#include "cpustat.h"
#include <QLabel>
#include <QTime>
#define HISTORY 60 // seconds

class QwtPlotCurve;

class CpuPlot : public QwtPlot 
{
    Q_OBJECT
public:
    enum EnvData
    {
        temperature,
        humidity,
        NEnvData
    };

    CpuPlot(QWidget * = 0);
    const QwtPlotCurve *cpuCurve(int id) const
        { return data[id].curve; }
    QTime time;

protected:
    void timerEvent(QTimerEvent *e);

private Q_SLOTS:
    void showCurve(QwtPlotItem *, bool on);

private:
    struct
    {
        QwtPlotCurve *curve;
        double data[HISTORY];
    } data[NEnvData];
    double timeData[HISTORY];

    int dataCount;
public slots:
    void setTemp(double temp);
    void setHum(double hum);

};
