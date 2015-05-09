/****************************************************************************
** Meta object code from reading C++ file 'contactsInfo.h'
**
** Created: Mon Jul 15 12:57:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/contactsInfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactsInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContactsInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      21,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ContactsInfo[] = {
    "ContactsInfo\0\0call()\0send()\0"
};

void ContactsInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContactsInfo *_t = static_cast<ContactsInfo *>(_o);
        switch (_id) {
        case 0: _t->call(); break;
        case 1: _t->send(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ContactsInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContactsInfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ContactsInfo,
      qt_meta_data_ContactsInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContactsInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContactsInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContactsInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsInfo))
        return static_cast<void*>(const_cast< ContactsInfo*>(this));
    if (!strcmp(_clname, "Ui::ContactsInfo"))
        return static_cast< Ui::ContactsInfo*>(const_cast< ContactsInfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int ContactsInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
