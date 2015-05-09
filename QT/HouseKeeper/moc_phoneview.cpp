/****************************************************************************
** Meta object code from reading C++ file 'phoneview.h'
**
** Created: Mon Jul 15 12:57:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/phoneview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phoneview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PhoneView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      26,   10,   10,   10, 0x08,
      44,   10,   10,   10, 0x08,
      62,   10,   10,   10, 0x08,
      81,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PhoneView[] = {
    "PhoneView\0\0openCallView()\0openMessageView()\0"
    "openUserSetView()\0openContactsView()\0"
    "openMsgBookView()\0"
};

void PhoneView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PhoneView *_t = static_cast<PhoneView *>(_o);
        switch (_id) {
        case 0: _t->openCallView(); break;
        case 1: _t->openMessageView(); break;
        case 2: _t->openUserSetView(); break;
        case 3: _t->openContactsView(); break;
        case 4: _t->openMsgBookView(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PhoneView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PhoneView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PhoneView,
      qt_meta_data_PhoneView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PhoneView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PhoneView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PhoneView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhoneView))
        return static_cast<void*>(const_cast< PhoneView*>(this));
    if (!strcmp(_clname, "Ui::PhoneView"))
        return static_cast< Ui::PhoneView*>(const_cast< PhoneView*>(this));
    return QWidget::qt_metacast(_clname);
}

int PhoneView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
