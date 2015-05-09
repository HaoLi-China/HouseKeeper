/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created: Mon Jul 15 12:57:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "databases/database.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   45,    9,    9, 0x0a,
     106,   87,   75,    9, 0x0a,
     134,   10,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataBase[] = {
    "DataBase\0\0msg\0signal_getNewLocation(QString)\0"
    "info\0slot_insert(ZIGBEE_INFO)\0QStringList\0"
    "sensorNum,sensorID\0slot_query(QString,QString)\0"
    "slot_getNewLocation(QString)\0"
};

void DataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataBase *_t = static_cast<DataBase *>(_o);
        switch (_id) {
        case 0: _t->signal_getNewLocation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slot_insert((*reinterpret_cast< ZIGBEE_INFO(*)>(_a[1]))); break;
        case 2: { QStringList _r = _t->slot_query((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: _t->slot_getNewLocation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataBase,
      qt_meta_data_DataBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataBase))
        return static_cast<void*>(const_cast< DataBase*>(this));
    return QObject::qt_metacast(_clname);
}

int DataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataBase::signal_getNewLocation(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
