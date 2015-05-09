/****************************************************************************
** Meta object code from reading C++ file 'adduser.h'
**
** Created: Mon Jul 15 12:57:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/adduser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adduser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddUser[] = {

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
      36,    8,    8,    8, 0x0a,
      50,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddUser[] = {
    "AddUser\0\0slot_showKeyboard(MyEdit*)\0"
    "slot_commit()\0slot_cancel()\0"
};

void AddUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddUser *_t = static_cast<AddUser *>(_o);
        switch (_id) {
        case 0: _t->slot_showKeyboard((*reinterpret_cast< MyEdit*(*)>(_a[1]))); break;
        case 1: _t->slot_commit(); break;
        case 2: _t->slot_cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddUser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddUser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddUser,
      qt_meta_data_AddUser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddUser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddUser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddUser))
        return static_cast<void*>(const_cast< AddUser*>(this));
    if (!strcmp(_clname, "Ui::AddUser"))
        return static_cast< Ui::AddUser*>(const_cast< AddUser*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
