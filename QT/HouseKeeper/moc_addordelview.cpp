/****************************************************************************
** Meta object code from reading C++ file 'addordelview.h'
**
** Created: Mon Jul 15 15:05:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/addordelview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addordelview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddOrDelView[] = {

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
      14,   13,   13,   13, 0x0a,
      31,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddOrDelView[] = {
    "AddOrDelView\0\0slot_toAddUser()\0"
    "slot_toDeleteUser()\0"
};

void AddOrDelView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddOrDelView *_t = static_cast<AddOrDelView *>(_o);
        switch (_id) {
        case 0: _t->slot_toAddUser(); break;
        case 1: _t->slot_toDeleteUser(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddOrDelView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddOrDelView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddOrDelView,
      qt_meta_data_AddOrDelView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddOrDelView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddOrDelView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddOrDelView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddOrDelView))
        return static_cast<void*>(const_cast< AddOrDelView*>(this));
    if (!strcmp(_clname, "Ui::AddOrDelView"))
        return static_cast< Ui::AddOrDelView*>(const_cast< AddOrDelView*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddOrDelView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
