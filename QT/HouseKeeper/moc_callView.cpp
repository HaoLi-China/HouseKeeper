/****************************************************************************
** Meta object code from reading C++ file 'callView.h'
**
** Created: Mon Jul 15 12:57:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/callView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CallView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      28,    9,    9,    9, 0x08,
      40,    9,    9,    9, 0x08,
      53,    9,    9,    9, 0x08,
      65,    9,    9,    9, 0x08,
      78,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CallView[] = {
    "CallView\0\0clickTextButton()\0clickCall()\0"
    "clickSpace()\0clickBack()\0clickClear()\0"
    "toContactsView()\0"
};

void CallView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CallView *_t = static_cast<CallView *>(_o);
        switch (_id) {
        case 0: _t->clickTextButton(); break;
        case 1: _t->clickCall(); break;
        case 2: _t->clickSpace(); break;
        case 3: _t->clickBack(); break;
        case 4: _t->clickClear(); break;
        case 5: _t->toContactsView(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CallView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CallView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CallView,
      qt_meta_data_CallView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CallView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CallView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CallView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CallView))
        return static_cast<void*>(const_cast< CallView*>(this));
    if (!strcmp(_clname, "Ui::CallView"))
        return static_cast< Ui::CallView*>(const_cast< CallView*>(this));
    return QDialog::qt_metacast(_clname);
}

int CallView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
