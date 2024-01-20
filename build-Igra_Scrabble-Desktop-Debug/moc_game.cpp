/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Igra_scrabble/headers/game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    QByteArrayData data[21];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Game"
QT_MOC_LITERAL(1, 5, 11), // "createBoard"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "Board"
QT_MOC_LITERAL(4, 24, 7), // "myBoard"
QT_MOC_LITERAL(5, 32, 9), // "sendBoard"
QT_MOC_LITERAL(6, 42, 10), // "sendPlayer"
QT_MOC_LITERAL(7, 53, 6), // "Player"
QT_MOC_LITERAL(8, 60, 6), // "player"
QT_MOC_LITERAL(9, 67, 7), // "sendEnd"
QT_MOC_LITERAL(10, 75, 13), // "winningPlayer"
QT_MOC_LITERAL(11, 89, 22), // "receiveNumberOfPlayers"
QT_MOC_LITERAL(12, 112, 6), // "number"
QT_MOC_LITERAL(13, 119, 17), // "receiveRepeatTurn"
QT_MOC_LITERAL(14, 137, 22), // "receiveRepeatFirstTurn"
QT_MOC_LITERAL(15, 160, 13), // "receiveUpdate"
QT_MOC_LITERAL(16, 174, 9), // "tempBoard"
QT_MOC_LITERAL(17, 184, 11), // "std::string"
QT_MOC_LITERAL(18, 196, 5), // "cards"
QT_MOC_LITERAL(19, 202, 24), // "receiveRequestSuggestion"
QT_MOC_LITERAL(20, 227, 14) // "receiveEndTurn"

    },
    "Game\0createBoard\0\0Board\0myBoard\0"
    "sendBoard\0sendPlayer\0Player\0player\0"
    "sendEnd\0winningPlayer\0receiveNumberOfPlayers\0"
    "number\0receiveRepeatTurn\0"
    "receiveRepeatFirstTurn\0receiveUpdate\0"
    "tempBoard\0std::string\0cards\0"
    "receiveRequestSuggestion\0receiveEndTurn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   76,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,
      14,    0,   80,    2, 0x0a /* Public */,
      15,    2,   81,    2, 0x0a /* Public */,
      19,    0,   86,    2, 0x0a /* Public */,
      20,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 17,   16,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   16,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createBoard((*reinterpret_cast< Board(*)>(_a[1]))); break;
        case 1: _t->sendBoard((*reinterpret_cast< Board(*)>(_a[1]))); break;
        case 2: _t->sendPlayer((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 3: _t->sendEnd((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 4: _t->receiveNumberOfPlayers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->receiveRepeatTurn(); break;
        case 6: _t->receiveRepeatFirstTurn(); break;
        case 7: _t->receiveUpdate((*reinterpret_cast< Board(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 8: _t->receiveRequestSuggestion(); break;
        case 9: _t->receiveEndTurn((*reinterpret_cast< Board(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(Board );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::createBoard)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Game::*)(Board );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::sendBoard)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Game::*)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::sendPlayer)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Game::*)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::sendEnd)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Game::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Game.data,
    qt_meta_data_Game,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Game::createBoard(Board _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::sendBoard(Board _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Game::sendPlayer(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Game::sendEnd(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
