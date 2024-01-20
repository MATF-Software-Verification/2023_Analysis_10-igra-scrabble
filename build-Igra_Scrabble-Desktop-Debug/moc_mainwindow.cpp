/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Igra_scrabble/headers/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "sendRepeatFirstTurn"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "sendRepeatTurn"
QT_MOC_LITERAL(4, 47, 11), // "sendEndTurn"
QT_MOC_LITERAL(5, 59, 5), // "Board"
QT_MOC_LITERAL(6, 65, 5), // "board"
QT_MOC_LITERAL(7, 71, 21), // "sendRequestSuggestion"
QT_MOC_LITERAL(8, 93, 10), // "sendUpdate"
QT_MOC_LITERAL(9, 104, 7), // "myBoard"
QT_MOC_LITERAL(10, 112, 11), // "std::string"
QT_MOC_LITERAL(11, 124, 5), // "cards"
QT_MOC_LITERAL(12, 130, 11), // "createBoard"
QT_MOC_LITERAL(13, 142, 12), // "receiveBoard"
QT_MOC_LITERAL(14, 155, 13), // "receivePlayer"
QT_MOC_LITERAL(15, 169, 6), // "Player"
QT_MOC_LITERAL(16, 176, 8), // "myPlayer"
QT_MOC_LITERAL(17, 185, 10), // "receiveEnd"
QT_MOC_LITERAL(18, 196, 13), // "winningPlayer"
QT_MOC_LITERAL(19, 210, 32), // "on_repeatTurn_pushButton_clicked"
QT_MOC_LITERAL(20, 243, 29), // "on_endTurn_pushButton_clicked"
QT_MOC_LITERAL(21, 273, 32), // "on_suggestion_pushButton_clicked"
QT_MOC_LITERAL(22, 306, 20), // "receiveClickedButton"
QT_MOC_LITERAL(23, 327, 13), // "receiveLetter"
QT_MOC_LITERAL(24, 341, 6) // "letter"

    },
    "MainWindow\0sendRepeatFirstTurn\0\0"
    "sendRepeatTurn\0sendEndTurn\0Board\0board\0"
    "sendRequestSuggestion\0sendUpdate\0"
    "myBoard\0std::string\0cards\0createBoard\0"
    "receiveBoard\0receivePlayer\0Player\0"
    "myPlayer\0receiveEnd\0winningPlayer\0"
    "on_repeatTurn_pushButton_clicked\0"
    "on_endTurn_pushButton_clicked\0"
    "on_suggestion_pushButton_clicked\0"
    "receiveClickedButton\0receiveLetter\0"
    "letter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    2,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   95,    2, 0x0a /* Public */,
      13,    1,   98,    2, 0x0a /* Public */,
      14,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,
      20,    0,  108,    2, 0x0a /* Public */,
      21,    0,  109,    2, 0x0a /* Public */,
      22,    0,  110,    2, 0x0a /* Public */,
      23,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 10,    9,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,   24,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendRepeatFirstTurn(); break;
        case 1: _t->sendRepeatTurn(); break;
        case 2: _t->sendEndTurn((*reinterpret_cast< Board(*)>(_a[1]))); break;
        case 3: _t->sendRequestSuggestion(); break;
        case 4: _t->sendUpdate((*reinterpret_cast< Board(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 5: _t->createBoard((*reinterpret_cast< Board(*)>(_a[1]))); break;
        case 6: _t->receiveBoard((*reinterpret_cast< Board(*)>(_a[1]))); break;
        case 7: _t->receivePlayer((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 8: _t->receiveEnd((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 9: _t->on_repeatTurn_pushButton_clicked(); break;
        case 10: _t->on_endTurn_pushButton_clicked(); break;
        case 11: _t->on_suggestion_pushButton_clicked(); break;
        case 12: _t->receiveClickedButton(); break;
        case 13: _t->receiveLetter((*reinterpret_cast< char(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendRepeatFirstTurn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendRepeatTurn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Board );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendEndTurn)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendRequestSuggestion)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Board , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendUpdate)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendRepeatFirstTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::sendRepeatTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::sendEndTurn(Board _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::sendRequestSuggestion()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::sendUpdate(Board _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
