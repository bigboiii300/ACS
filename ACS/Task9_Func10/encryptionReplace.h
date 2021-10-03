#ifndef __encryptionReplace__
#define __encryptionReplace__

//------------------------------------------------------------------------------
// encryptionShift.h - содержит описание шифра с цифрами  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
#include <algorithm>
using namespace std;

// прямоугольник
struct encryptionReplace {
    string text;
    string symbols;
};

// Ввод параметров текста из файла
void In(encryptionReplace &n, ifstream &ifst);

// Вывод параметров текста в форматируемый поток
void Out(encryptionReplace &n, ofstream &ofst);


#endif //__encryptionReplace__
