//------------------------------------------------------------------------------
// encryptionReplace_In.cpp - содержит процедуру ввода параметров
// для уже созданного текста
//------------------------------------------------------------------------------

#include "encryptionShift.h"

//------------------------------------------------------------------------------
// Ввод параметров текста из файла
void In(encryptionShift &s, ifstream &ifst) {
    ifst >> s.text >> s.n;
}

//------------------------------------------------------------------------------
// Вывод параметров зашифрованного текста в форматируемый поток
void Out(encryptionShift &s, ofstream &ofst) {
    char array[s.text.length()];
    for (int i = 0; i < s.text.length(); ++i) {
        array[i]=s.text[i];
    }

    std::valarray<char> myValArray(array, s.text.length());  // 1 2 3 4 5
    myValArray = myValArray.cshift(-s.n);        // 2 3 4 5 1 - rotated right
    for (int i = 0; i < myValArray.size(); ++i) {
        ofst <<&"Text:"[ myValArray[i]]<<" ";
    }
}

//------------------------------------------------------------------------------
