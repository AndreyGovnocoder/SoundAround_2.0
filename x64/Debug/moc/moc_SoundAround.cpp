/****************************************************************************
** Meta object code from reading C++ file 'SoundAround.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../SoundAround.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SoundAround.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoundAround_t {
    QByteArrayData data[18];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundAround_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundAround_t qt_meta_stringdata_SoundAround = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SoundAround"
QT_MOC_LITERAL(1, 12, 12), // "addTrackSlot"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "editTrackSlot"
QT_MOC_LITERAL(4, 40, 15), // "removeTrackSlot"
QT_MOC_LITERAL(5, 56, 22), // "addTrackToPlaylistSlot"
QT_MOC_LITERAL(6, 79, 8), // "testSlot"
QT_MOC_LITERAL(7, 88, 19), // "showConfigsFormSlot"
QT_MOC_LITERAL(8, 108, 17), // "showAboutFormSlot"
QT_MOC_LITERAL(9, 126, 17), // "showReferenceSlot"
QT_MOC_LITERAL(10, 144, 35), // "tracksTableContextMenuRequest..."
QT_MOC_LITERAL(11, 180, 3), // "pos"
QT_MOC_LITERAL(12, 184, 23), // "showHideTracksTableSlot"
QT_MOC_LITERAL(13, 208, 19), // "closeTrackFrameSlot"
QT_MOC_LITERAL(14, 228, 7), // "trackId"
QT_MOC_LITERAL(15, 236, 15), // "filterByTagSlot"
QT_MOC_LITERAL(16, 252, 22), // "addEmptyTrackFrameSlot"
QT_MOC_LITERAL(17, 275, 24) // "cleanTrackFramesListSlot"

    },
    "SoundAround\0addTrackSlot\0\0editTrackSlot\0"
    "removeTrackSlot\0addTrackToPlaylistSlot\0"
    "testSlot\0showConfigsFormSlot\0"
    "showAboutFormSlot\0showReferenceSlot\0"
    "tracksTableContextMenuRequestedSlot\0"
    "pos\0showHideTracksTableSlot\0"
    "closeTrackFrameSlot\0trackId\0filterByTagSlot\0"
    "addEmptyTrackFrameSlot\0cleanTrackFramesListSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundAround[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SoundAround::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoundAround *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->addTrackSlot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->editTrackSlot(); break;
        case 2: _t->removeTrackSlot(); break;
        case 3: _t->addTrackToPlaylistSlot(); break;
        case 4: _t->testSlot(); break;
        case 5: _t->showConfigsFormSlot(); break;
        case 6: _t->showAboutFormSlot(); break;
        case 7: _t->showReferenceSlot(); break;
        case 8: _t->tracksTableContextMenuRequestedSlot((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->showHideTracksTableSlot(); break;
        case 10: _t->closeTrackFrameSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->filterByTagSlot(); break;
        case 12: _t->addEmptyTrackFrameSlot(); break;
        case 13: _t->cleanTrackFramesListSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SoundAround::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SoundAround.data,
    qt_meta_data_SoundAround,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SoundAround::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundAround::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoundAround.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SoundAround::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
