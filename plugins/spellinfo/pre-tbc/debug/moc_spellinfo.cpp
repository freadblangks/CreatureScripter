/****************************************************************************
** Meta object code from reading C++ file 'spellinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spellinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spellinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpellInfo_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpellInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpellInfo_t qt_meta_stringdata_SpellInfo = {
    {
QT_MOC_LITERAL(0, 0, 9) // "SpellInfo"

    },
    "SpellInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpellInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpellInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SpellInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpellInfo.data,
      qt_meta_data_SpellInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpellInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpellInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpellInfo.stringdata0))
        return static_cast<void*>(const_cast< SpellInfo*>(this));
    if (!strcmp(_clname, "SpellInfoInterface"))
        return static_cast< SpellInfoInterface*>(const_cast< SpellInfo*>(this));
    if (!strcmp(_clname, "org.qsw.plugins.spellinfo"))
        return static_cast< SpellInfoInterface*>(const_cast< SpellInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int SpellInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '`',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    'L',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x19, 0x00, 'o',  'r',  'g',  '.',  'q',  's', 
    'w',  '.',  'p',  'l',  'u',  'g',  'i',  'n', 
    's',  '.',  's',  'p',  'e',  'l',  'l',  'i', 
    'n',  'f',  'o',  0x00, 0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x09, 0x00, 'S',  'p', 
    'e',  'l',  'l',  'I',  'n',  'f',  'o',  0x00,
    0x1a, 0x00, 0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x0f, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xd0, 0x00, 0x00, 0x00,
    0x0d, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x07, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  0x00, 0x00, 0x00,
    0x9b, 0x06, 0x00, 0x00, 0x08, 0x00, 'f',  'u', 
    'l',  'l',  'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0a, 0x00, 'W',  'o',  'W',  ' ',  '1',  '.', 
    '1',  '2',  '.',  'x',  0x1b, 0x0a, 0x00, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x05, 0x00, '1',  '.', 
    '0',  '.',  '1',  0x00, 0x1b, 0x0d, 0x00, 0x00,
    0x08, 0x00, 'h',  't',  'm',  'l',  'F',  'i', 
    'l',  'e',  0x00, 0x00, 0x0c, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  '.',  'h',  't', 
    'm',  'l',  0x00, 0x00, 0x1b, 0x11, 0x00, 0x00,
    0x07, 0x00, 'c',  's',  's',  'F',  'i',  'l', 
    'e',  0x00, 0x00, 0x00, 0x0b, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  '.',  'c',  's', 
    's',  0x00, 0x00, 0x00, 0x1b, 0x15, 0x00, 0x00,
    0x07, 0x00, 'x',  'm',  'l',  'F',  'i',  'l', 
    'e',  0x00, 0x00, 0x00, 0x0b, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  '.',  'x',  'm', 
    'l',  0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '`',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    'L',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x19, 0x00, 'o',  'r',  'g',  '.',  'q',  's', 
    'w',  '.',  'p',  'l',  'u',  'g',  'i',  'n', 
    's',  '.',  's',  'p',  'e',  'l',  'l',  'i', 
    'n',  'f',  'o',  0x00, 0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xd0, 0x00, 0x00, 0x00,
    0x0d, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x07, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  0x00, 0x00, 0x00,
    0x9b, 0x06, 0x00, 0x00, 0x08, 0x00, 'f',  'u', 
    'l',  'l',  'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0a, 0x00, 'W',  'o',  'W',  ' ',  '1',  '.', 
    '1',  '2',  '.',  'x',  0x1b, 0x0a, 0x00, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x05, 0x00, '1',  '.', 
    '0',  '.',  '1',  0x00, 0x1b, 0x0d, 0x00, 0x00,
    0x08, 0x00, 'h',  't',  'm',  'l',  'F',  'i', 
    'l',  'e',  0x00, 0x00, 0x0c, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  '.',  'h',  't', 
    'm',  'l',  0x00, 0x00, 0x1b, 0x11, 0x00, 0x00,
    0x07, 0x00, 'c',  's',  's',  'F',  'i',  'l', 
    'e',  0x00, 0x00, 0x00, 0x0b, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  '.',  'c',  's', 
    's',  0x00, 0x00, 0x00, 0x1b, 0x15, 0x00, 0x00,
    0x07, 0x00, 'x',  'm',  'l',  'F',  'i',  'l', 
    'e',  0x00, 0x00, 0x00, 0x0b, 0x00, 'p',  'r', 
    'e',  '-',  't',  'b',  'c',  '.',  'x',  'm', 
    'l',  0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x9b, '$',  0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x09, 0x00, 'S',  'p', 
    'e',  'l',  'l',  'I',  'n',  'f',  'o',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, 0x00, 0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00,
    '0',  0x01, 0x00, 0x00, '<',  0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(SpellInfo, SpellInfo)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
