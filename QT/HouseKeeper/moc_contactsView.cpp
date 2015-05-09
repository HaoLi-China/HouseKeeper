/****************************************************************************
** Meta object code from reading C++ file 'contactsView.h'
**
** Created: Mon Jul 15 12:57:39 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/contactsView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContactsView[] = {

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
      14,   13,   13,   13, 0x08,
      28,   13,   13,   13, 0x08,
      50,   45,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ContactsView[] = {
    "ContactsView\0\0addContacts()\0"
    "deleteContacts()\0item\0showInfo(QListWidgetItem*)\0"
};

void ContactsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContactsView *_t = static_cast<ContactsView *>(_o);
        switch (_id) {
        case 0: _t->addContacts(); break;
        case 1: _t->deleteContacts(); break;
        case 2: _t->showInfo((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ContactsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContactsView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ContactsView,
      qt_meta_data_ContactsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContactsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContactsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContactsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContactsView))
        return static_cast<void*>(const_cast< ContactsView*>(this));
    if (!strcmp(_clname, "Ui::ContactsView"))
        return static_cast< Ui::ContactsView*>(const_cast< ContactsView*>(this));
    return QDialog::qt_metacast(_clname);
}

int ContactsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
