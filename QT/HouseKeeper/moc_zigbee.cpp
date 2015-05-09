/****************************************************************************
** Meta object code from reading C++ file 'zigbee.h'
**
** Created: Tue Jul 16 11:38:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "zeegbee/zigbee.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zigbee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZigBee[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x05,
      59,   40,    7,    7, 0x05,
      89,    7,    7,    7, 0x05,
     105,    7,    7,    7, 0x05,
     123,    7,    7,    7, 0x05,
     138,    7,    7,    7, 0x05,
     155,    7,    7,    7, 0x05,
     174,    7,    7,    7, 0x05,
     193,    7,    7,    7, 0x05,
     212,    7,    7,    7, 0x05,
     231,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     250,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZigBee[] = {
    "ZigBee\0\0info\0signal_insert(ZIGBEE_INFO)\0"
    "sensorNum,sensorID\0signal_query(QString,QString)\0"
    "signal_people()\0signal_nopeople()\0"
    "signal_smoke()\0signal_nosmoke()\0"
    "signal_hum(double)\0signal_tem(double)\0"
    "signal_thNotWork()\0signal_plNotWork()\0"
    "signal_skNotWork()\0timeout_slot()\0"
};

void ZigBee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZigBee *_t = static_cast<ZigBee *>(_o);
        switch (_id) {
        case 0: _t->signal_insert((*reinterpret_cast< ZIGBEE_INFO(*)>(_a[1]))); break;
        case 1: _t->signal_query((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->signal_people(); break;
        case 3: _t->signal_nopeople(); break;
        case 4: _t->signal_smoke(); break;
        case 5: _t->signal_nosmoke(); break;
        case 6: _t->signal_hum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->signal_tem((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->signal_thNotWork(); break;
        case 9: _t->signal_plNotWork(); break;
        case 10: _t->signal_skNotWork(); break;
        case 11: _t->timeout_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZigBee::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZigBee::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZigBee,
      qt_meta_data_ZigBee, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZigBee::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZigBee::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZigBee::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZigBee))
        return static_cast<void*>(const_cast< ZigBee*>(this));
    return QObject::qt_metacast(_clname);
}

int ZigBee::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ZigBee::signal_insert(ZIGBEE_INFO _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZigBee::signal_query(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ZigBee::signal_people()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ZigBee::signal_nopeople()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ZigBee::signal_smoke()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ZigBee::signal_nosmoke()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ZigBee::signal_hum(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ZigBee::signal_tem(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ZigBee::signal_thNotWork()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void ZigBee::signal_plNotWork()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void ZigBee::signal_skNotWork()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
QT_END_MOC_NAMESPACE
