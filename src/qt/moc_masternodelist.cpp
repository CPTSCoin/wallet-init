/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[28];
    char stringdata0[496];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MasternodeList"
QT_MOC_LITERAL(1, 15, 22), // "updateMyMasternodeInfo"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "strAlias"
QT_MOC_LITERAL(4, 48, 7), // "strAddr"
QT_MOC_LITERAL(5, 56, 12), // "CMasternode*"
QT_MOC_LITERAL(6, 69, 3), // "pmn"
QT_MOC_LITERAL(7, 73, 16), // "updateMyNodeList"
QT_MOC_LITERAL(8, 90, 6), // "fForce"
QT_MOC_LITERAL(9, 97, 14), // "updateNodeList"
QT_MOC_LITERAL(10, 112, 15), // "showContextMenu"
QT_MOC_LITERAL(11, 128, 29), // "on_filterLineEdit_textChanged"
QT_MOC_LITERAL(12, 158, 11), // "strFilterIn"
QT_MOC_LITERAL(13, 170, 11), // "deleteAlias"
QT_MOC_LITERAL(14, 182, 9), // "copyAlias"
QT_MOC_LITERAL(15, 192, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(16, 215, 34), // "on_editConfigureMasternode_cl..."
QT_MOC_LITERAL(17, 250, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(18, 276, 29), // "on_startMissingButton_clicked"
QT_MOC_LITERAL(19, 306, 36), // "on_configureMasternodeButton_..."
QT_MOC_LITERAL(20, 343, 31), // "openEditConfigureMasternodePage"
QT_MOC_LITERAL(21, 375, 5), // "strIP"
QT_MOC_LITERAL(22, 381, 10), // "strPrivKey"
QT_MOC_LITERAL(23, 392, 9), // "strTxHash"
QT_MOC_LITERAL(24, 402, 14), // "strOutputIndex"
QT_MOC_LITERAL(25, 417, 5), // "count"
QT_MOC_LITERAL(26, 423, 48), // "on_tableWidgetMyMasternodes_i..."
QT_MOC_LITERAL(27, 472, 23) // "on_UpdateButton_clicked"

    },
    "MasternodeList\0updateMyMasternodeInfo\0"
    "\0strAlias\0strAddr\0CMasternode*\0pmn\0"
    "updateMyNodeList\0fForce\0updateNodeList\0"
    "showContextMenu\0on_filterLineEdit_textChanged\0"
    "strFilterIn\0deleteAlias\0copyAlias\0"
    "on_startButton_clicked\0"
    "on_editConfigureMasternode_clicked\0"
    "on_startAllButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_configureMasternodeButton_clicked\0"
    "openEditConfigureMasternodePage\0strIP\0"
    "strPrivKey\0strTxHash\0strOutputIndex\0"
    "count\0on_tableWidgetMyMasternodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   94,    2, 0x0a /* Public */,
       7,    1,  101,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x2a /* Public | MethodCloned */,
       9,    0,  105,    2, 0x0a /* Public */,
      10,    1,  106,    2, 0x08 /* Private */,
      11,    1,  109,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,
      19,    0,  118,    2, 0x08 /* Private */,
      20,    6,  119,    2, 0x08 /* Private */,
      26,    0,  132,    2, 0x08 /* Private */,
      27,    0,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,   21,   22,   23,   24,   25,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMyMasternodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< CMasternode*(*)>(_a[3]))); break;
        case 1: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateMyNodeList(); break;
        case 3: _t->updateNodeList(); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->deleteAlias(); break;
        case 7: _t->copyAlias(); break;
        case 8: _t->on_startButton_clicked(); break;
        case 9: _t->on_editConfigureMasternode_clicked(); break;
        case 10: _t->on_startAllButton_clicked(); break;
        case 11: _t->on_startMissingButton_clicked(); break;
        case 12: _t->on_configureMasternodeButton_clicked(); break;
        case 13: _t->openEditConfigureMasternodePage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 14: _t->on_tableWidgetMyMasternodes_itemSelectionChanged(); break;
        case 15: _t->on_UpdateButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata0))
        return static_cast<void*>(const_cast< MasternodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
