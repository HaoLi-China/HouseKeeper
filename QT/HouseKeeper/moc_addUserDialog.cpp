/****************************************************************************
** Meta object code from reading C++ file 'addUserDialog.h'
**
** Created: Mon Jul 15 12:57:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/addUserDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addUserDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddUserDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      33,   14,   14,   14, 0x08,
      46,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddUserDialog[] = {
    "AddUserDialog\0\0clickTextButton()\0"
    "clickSpace()\0clickBack()\0clickClear()\0"
};

void AddUserDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddUserDialog *_t = static_cast<AddUserDialog *>(_o);
        switch (_id) {
        case 0: _t->clickTextButton(); break;
        case 1: _t->clickSpace(); break;
        case 2: _t->clickBack(); break;
        case 3: _t->clickClear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddUserDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddUserDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddUserDialog,
      qt_meta_data_AddUserDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddUserDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddUserDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddUserDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddUserDialog))
        return static_cast<void*>(const_cast< AddUserDialog*>(this));
    if (!strcmp(_clname, "Ui::AddUserDialog"))
        return static_cast< Ui::AddUserDialog*>(const_cast< AddUserDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddUserDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE