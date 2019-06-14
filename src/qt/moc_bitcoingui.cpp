/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[59];
    char stringdata0[807];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 11), // "receivedURI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "uri"
QT_MOC_LITERAL(4, 28, 16), // "requestedRestart"
QT_MOC_LITERAL(5, 45, 4), // "args"
QT_MOC_LITERAL(6, 50, 17), // "setNumConnections"
QT_MOC_LITERAL(7, 68, 5), // "count"
QT_MOC_LITERAL(8, 74, 12), // "setNumBlocks"
QT_MOC_LITERAL(9, 87, 13), // "handleRestart"
QT_MOC_LITERAL(10, 101, 7), // "message"
QT_MOC_LITERAL(11, 109, 5), // "title"
QT_MOC_LITERAL(12, 115, 5), // "style"
QT_MOC_LITERAL(13, 121, 5), // "bool*"
QT_MOC_LITERAL(14, 127, 3), // "ret"
QT_MOC_LITERAL(15, 131, 15), // "linkClickedSlot"
QT_MOC_LITERAL(16, 147, 21), // "linkaLtbetClickedSlot"
QT_MOC_LITERAL(17, 169, 13), // "timerTickSlot"
QT_MOC_LITERAL(18, 183, 16), // "setStakingStatus"
QT_MOC_LITERAL(19, 200, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(20, 220, 6), // "status"
QT_MOC_LITERAL(21, 227, 20), // "handlePaymentRequest"
QT_MOC_LITERAL(22, 248, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(23, 267, 9), // "recipient"
QT_MOC_LITERAL(24, 277, 19), // "incomingTransaction"
QT_MOC_LITERAL(25, 297, 4), // "date"
QT_MOC_LITERAL(26, 302, 4), // "unit"
QT_MOC_LITERAL(27, 307, 7), // "CAmount"
QT_MOC_LITERAL(28, 315, 6), // "amount"
QT_MOC_LITERAL(29, 322, 4), // "type"
QT_MOC_LITERAL(30, 327, 7), // "address"
QT_MOC_LITERAL(31, 335, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(32, 352, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(33, 368, 21), // "gotoBlockExplorerPage"
QT_MOC_LITERAL(34, 390, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(35, 409, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(36, 430, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(37, 448, 4), // "addr"
QT_MOC_LITERAL(38, 453, 16), // "gotoProposalPage"
QT_MOC_LITERAL(39, 470, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(40, 489, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(41, 510, 19), // "gotoMultiSendDialog"
QT_MOC_LITERAL(42, 530, 18), // "gotoMultisigCreate"
QT_MOC_LITERAL(43, 549, 17), // "gotoMultisigSpend"
QT_MOC_LITERAL(44, 567, 16), // "gotoMultisigSign"
QT_MOC_LITERAL(45, 584, 13), // "gotoBip38Tool"
QT_MOC_LITERAL(46, 598, 11), // "openClicked"
QT_MOC_LITERAL(47, 610, 14), // "optionsClicked"
QT_MOC_LITERAL(48, 625, 12), // "aboutClicked"
QT_MOC_LITERAL(49, 638, 22), // "showHelpMessageClicked"
QT_MOC_LITERAL(50, 661, 17), // "trayIconActivated"
QT_MOC_LITERAL(51, 679, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(52, 713, 6), // "reason"
QT_MOC_LITERAL(53, 720, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(54, 742, 13), // "fToggleHidden"
QT_MOC_LITERAL(55, 756, 12), // "toggleHidden"
QT_MOC_LITERAL(56, 769, 14), // "detectShutdown"
QT_MOC_LITERAL(57, 784, 12), // "showProgress"
QT_MOC_LITERAL(58, 797, 9) // "nProgress"

    },
    "BitcoinGUI\0receivedURI\0\0uri\0"
    "requestedRestart\0args\0setNumConnections\0"
    "count\0setNumBlocks\0handleRestart\0"
    "message\0title\0style\0bool*\0ret\0"
    "linkClickedSlot\0linkaLtbetClickedSlot\0"
    "timerTickSlot\0setStakingStatus\0"
    "setEncryptionStatus\0status\0"
    "handlePaymentRequest\0SendCoinsRecipient\0"
    "recipient\0incomingTransaction\0date\0"
    "unit\0CAmount\0amount\0type\0address\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoBlockExplorerPage\0gotoMasternodePage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoProposalPage\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0gotoMultiSendDialog\0"
    "gotoMultisigCreate\0gotoMultisigSpend\0"
    "gotoMultisigSign\0gotoBip38Tool\0"
    "openClicked\0optionsClicked\0aboutClicked\0"
    "showHelpMessageClicked\0trayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0showNormalIfMinimized\0fToggleHidden\0"
    "toggleHidden\0detectShutdown\0showProgress\0"
    "nProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  219,    2, 0x06 /* Public */,
       4,    1,  222,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  225,    2, 0x0a /* Public */,
       8,    1,  228,    2, 0x0a /* Public */,
       9,    1,  231,    2, 0x0a /* Public */,
      10,    4,  234,    2, 0x0a /* Public */,
      10,    3,  243,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  250,    2, 0x0a /* Public */,
      16,    0,  251,    2, 0x0a /* Public */,
      17,    0,  252,    2, 0x0a /* Public */,
      18,    0,  253,    2, 0x0a /* Public */,
      19,    1,  254,    2, 0x0a /* Public */,
      21,    1,  257,    2, 0x0a /* Public */,
      24,    5,  260,    2, 0x0a /* Public */,
      31,    0,  271,    2, 0x08 /* Private */,
      32,    0,  272,    2, 0x08 /* Private */,
      33,    0,  273,    2, 0x08 /* Private */,
      34,    0,  274,    2, 0x08 /* Private */,
      35,    0,  275,    2, 0x08 /* Private */,
      36,    1,  276,    2, 0x08 /* Private */,
      36,    0,  279,    2, 0x28 /* Private | MethodCloned */,
      38,    0,  280,    2, 0x08 /* Private */,
      39,    1,  281,    2, 0x08 /* Private */,
      39,    0,  284,    2, 0x28 /* Private | MethodCloned */,
      40,    1,  285,    2, 0x08 /* Private */,
      40,    0,  288,    2, 0x28 /* Private | MethodCloned */,
      41,    0,  289,    2, 0x08 /* Private */,
      42,    0,  290,    2, 0x08 /* Private */,
      43,    0,  291,    2, 0x08 /* Private */,
      44,    0,  292,    2, 0x08 /* Private */,
      45,    0,  293,    2, 0x08 /* Private */,
      46,    0,  294,    2, 0x08 /* Private */,
      47,    0,  295,    2, 0x08 /* Private */,
      48,    0,  296,    2, 0x08 /* Private */,
      49,    0,  297,    2, 0x08 /* Private */,
      50,    1,  298,    2, 0x08 /* Private */,
      53,    1,  301,    2, 0x08 /* Private */,
      53,    0,  304,    2, 0x28 /* Private | MethodCloned */,
      55,    0,  305,    2, 0x08 /* Private */,
      56,    0,  306,    2, 0x08 /* Private */,
      57,    2,  307,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 13,   11,   10,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   11,   10,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 27, QMetaType::QString, QMetaType::QString,   25,   26,   28,   29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   58,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestedRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 6: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 7: _t->linkClickedSlot(); break;
        case 8: _t->linkaLtbetClickedSlot(); break;
        case 9: _t->timerTickSlot(); break;
        case 10: _t->setStakingStatus(); break;
        case 11: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< const SendCoinsRecipient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 14: _t->gotoOverviewPage(); break;
        case 15: _t->gotoHistoryPage(); break;
        case 16: _t->gotoBlockExplorerPage(); break;
        case 17: _t->gotoMasternodePage(); break;
        case 18: _t->gotoReceiveCoinsPage(); break;
        case 19: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->gotoSendCoinsPage(); break;
        case 21: _t->gotoProposalPage(); break;
        case 22: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->gotoSignMessageTab(); break;
        case 24: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->gotoVerifyMessageTab(); break;
        case 26: _t->gotoMultiSendDialog(); break;
        case 27: _t->gotoMultisigCreate(); break;
        case 28: _t->gotoMultisigSpend(); break;
        case 29: _t->gotoMultisigSign(); break;
        case 30: _t->gotoBip38Tool(); break;
        case 31: _t->openClicked(); break;
        case 32: _t->optionsClicked(); break;
        case 33: _t->aboutClicked(); break;
        case 34: _t->showHelpMessageClicked(); break;
        case 35: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 36: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->showNormalIfMinimized(); break;
        case 38: _t->toggleHidden(); break;
        case 39: _t->detectShutdown(); break;
        case 40: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BitcoinGUI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::receivedURI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinGUI::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::requestedRestart)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitcoinGUI::requestedRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UnitDisplayStatusBarControl_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitDisplayStatusBarControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitDisplayStatusBarControl_t qt_meta_stringdata_UnitDisplayStatusBarControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UnitDisplayStatusBarControl"
QT_MOC_LITERAL(1, 28, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "newUnits"
QT_MOC_LITERAL(4, 56, 15), // "onMenuSelection"
QT_MOC_LITERAL(5, 72, 8), // "QAction*"
QT_MOC_LITERAL(6, 81, 6) // "action"

    },
    "UnitDisplayStatusBarControl\0"
    "updateDisplayUnit\0\0newUnits\0onMenuSelection\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitDisplayStatusBarControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitDisplayStatusBarControl *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UnitDisplayStatusBarControl.data,
      qt_meta_data_UnitDisplayStatusBarControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnitDisplayStatusBarControl.stringdata0))
        return static_cast<void*>(const_cast< UnitDisplayStatusBarControl*>(this));
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_WebFrame_t {
    QByteArrayData data[3];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebFrame_t qt_meta_stringdata_WebFrame = {
    {
QT_MOC_LITERAL(0, 0, 8), // "WebFrame"
QT_MOC_LITERAL(1, 9, 7), // "onClick"
QT_MOC_LITERAL(2, 17, 0) // ""

    },
    "WebFrame\0onClick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WebFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebFrame *_t = static_cast<WebFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WebFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebFrame::onClick)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WebFrame::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_WebFrame.data,
      qt_meta_data_WebFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WebFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WebFrame.stringdata0))
        return static_cast<void*>(const_cast< WebFrame*>(this));
    return QLabel::qt_metacast(_clname);
}

int WebFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WebFrame::onClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_headerLabel_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_headerLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_headerLabel_t qt_meta_stringdata_headerLabel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "headerLabel"
QT_MOC_LITERAL(1, 12, 7), // "onClick"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "headerLabel\0onClick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_headerLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void headerLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        headerLabel *_t = static_cast<headerLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (headerLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&headerLabel::onClick)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject headerLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_headerLabel.data,
      qt_meta_data_headerLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *headerLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *headerLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_headerLabel.stringdata0))
        return static_cast<void*>(const_cast< headerLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int headerLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void headerLabel::onClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
