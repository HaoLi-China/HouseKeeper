/****************************************************************************
** Meta object code from reading C++ file 'mainview.h'
**
** Created: Tue Jul 16 11:38:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/mainview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,    9,    9,    9, 0x0a,
      50,    9,    9,    9, 0x0a,
      70,    9,    9,    9, 0x0a,
      89,    9,    9,    9, 0x0a,
     107,    9,    9,    9, 0x0a,
     125,    9,    9,    9, 0x0a,
     146,    9,    9,    9, 0x0a,
     161,    9,    9,    9, 0x0a,
     175,    9,    9,    9, 0x0a,
     192,    9,    9,    9, 0x0a,
     211,    9,    9,    9, 0x0a,
     233,    9,    9,    9, 0x0a,
     254,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainView[] = {
    "MainView\0\0signal_timeUpdated()\0"
    "slot_showMonitor()\0slot_showServices()\0"
    "slot_showSetting()\0slot_showOthers()\0"
    "slot_updateTime()\0slot_toEnvironment()\0"
    "slot_toAbout()\0slot_toHelp()\0"
    "slot_toSetting()\0slot_toPhoneView()\0"
    "slot_toLocationView()\0slot_toSafeSetting()\0"
    "slot_setSafeFlag(bool)\0"
};

void MainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainView *_t = static_cast<MainView *>(_o);
        switch (_id) {
        case 0: _t->signal_timeUpdated(); break;
        case 1: _t->slot_showMonitor(); break;
        case 2: _t->slot_showServices(); break;
        case 3: _t->slot_showSetting(); break;
        case 4: _t->slot_showOthers(); break;
        case 5: _t->slot_updateTime(); break;
        case 6: _t->slot_toEnvironment(); break;
        case 7: _t->slot_toAbout(); break;
        case 8: _t->slot_toHelp(); break;
        case 9: _t->slot_toSetting(); break;
        case 10: _t->slot_toPhoneView(); break;
        case 11: _t->slot_toLocationView(); break;
        case 12: _t->slot_toSafeSetting(); break;
        case 13: _t->slot_setSafeFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainView,
      qt_meta_data_MainView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainView))
        return static_cast<void*>(const_cast< MainView*>(this));
    if (!strcmp(_clname, "Ui::MainView"))
        return static_cast< Ui::MainView*>(const_cast< MainView*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainView::signal_timeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
