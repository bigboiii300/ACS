//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой текста
// и создания шифрования
//------------------------------------------------------------------------------

#include "text.h"

//------------------------------------------------------------------------------
// Ввод текста из файла
text* In(std::ifstream &ifst) {
    text *txt;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            txt->k = text::ENCRYPTIONNUMBERS;
            In(txt->n, ifst);
            return txt;
        case 2:
            txt->k = text::ENCRYPTIONREPLACE;
            In(txt->r, ifst);
            return txt;
        case 3:
            txt->k = text::ENCRYPTIONSHIFT;
            In(txt->s, ifst);
            return txt;
        default:
            return nullptr;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущего текста в поток
void Out(text &s, std::ofstream &ofst) {
    switch(s.k) {
        case text::ENCRYPTIONNUMBERS:
            Out(s.n, ofst);
            break;
        case text::ENCRYPTIONREPLACE:
            Out(s.r, ofst);
            break;
        case text::ENCRYPTIONSHIFT:
            Out(s.s, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << std::endl;
    }
}
