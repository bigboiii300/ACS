#ifndef __text__
#define __text__

//------------------------------------------------------------------------------
// text.h - содержит описание обобщающего текста
//------------------------------------------------------------------------------

#include "encryptionReplace.h"
#include "encryptionNumbers.h"
#include "encryptionShift.h"
#include <fstream>
#include <cstring>


//------------------------------------------------------------------------------
// структура, обобщающая текст
struct text {
// значения ключей для каждого из шифров
    enum key {ENCRYPTIONNUMBERS, ENCRYPTIONREPLACE,ENCRYPTIONSHIFT};
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        encryptionNumbers n;
        encryptionReplace r;
        encryptionShift s;
    };
};

// Ввод обобщенного текста
text *In(std::ifstream &ifdt);

// Вывод обобщенного текста
void Out(text &s, std::ofstream &ofst);

#endif
