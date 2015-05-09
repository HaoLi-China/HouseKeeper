/****************************************************************************
** Meta object code from reading C++ file 'messageView.h'
**
** Created: Mon Jul 15 12:57:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/messageView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      30,   12,   12,   12, 0x08,
      43,   12,   12,   12, 0x08,
      59,   12,   12,   12, 0x08,
      72,   12,   12,   12, 0x08,
      90,   12,   12,   12, 0x08,
     102,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MessageView[] = {
    "MessageView\0\0clickBackspace()\0"
    "clickSpace()\0clickNextLine()\0clickClear()\0"
    "clickTextButton()\0clickSend()\0"
    "toContactsView()\0"
};

void MessageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageView *_t = static_cast<MessageView *>(_o);
        switch (_id) {
        case 0: _t->clickBackspace(); break;
        case 1: _t->clickSpace(); break;
        case 2: _t->clickNextLine(); break;
        case 3: _t->clickClear(); break;
        case 4: _t->clickTextButton(); break;
        case 5: _t->clickSend(); break;
        case 6: _t->toContactsView(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MessageView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MessageView,
      qt_meta_data_MessageView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageView))
        return static_cast<void*>(const_cast< MessageView*>(this));
    if (!strcmp(_clname, "Ui::MessageView"))
        return static_cast< Ui::MessageView*>(const_cast< MessageView*>(this));
    return QDialog::qt_metacast(_clname);
}

int MessageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
