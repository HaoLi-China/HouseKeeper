/****************************************************************************
** Meta object code from reading C++ file 'gprs.h'
**
** Created: Mon Jul 15 12:57:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gprs/gprs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gprs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gprs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      15,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gprs[] = {
    "Gprs\0\0hangUp()\0timeout_slot()\0"
};

void Gprs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gprs *_t = static_cast<Gprs *>(_o);
        switch (_id) {
        case 0: _t->hangUp(); break;
        case 1: _t->timeout_slot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gprs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gprs::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gprs,
      qt_meta_data_Gprs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gprs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gprs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gprs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gprs))
        return static_cast<void*>(const_cast< Gprs*>(this));
    return QObject::qt_metacast(_clname);
}

int Gprs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gprs::hangUp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
