/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created: Mon Jul 15 15:05:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/setting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Setting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      25,    8,    8,    8, 0x0a,
      42,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Setting[] = {
    "Setting\0\0slot_toRemote()\0slot_toWebUser()\0"
    "slot_toChangePasswd()\0"
};

void Setting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Setting *_t = static_cast<Setting *>(_o);
        switch (_id) {
        case 0: _t->slot_toRemote(); break;
        case 1: _t->slot_toWebUser(); break;
        case 2: _t->slot_toChangePasswd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Setting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Setting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Setting,
      qt_meta_data_Setting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Setting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Setting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Setting))
        return static_cast<void*>(const_cast< Setting*>(this));
    if (!strcmp(_clname, "Ui::Setting"))
        return static_cast< Ui::Setting*>(const_cast< Setting*>(this));
    return QWidget::qt_metacast(_clname);
}

int Setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
