#ifndef __encryptionNumbers__
#define __encryptionNumbers__

//------------------------------------------------------------------------------
// encryptionReplace.h - содержит описание шифра с цифрами  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
#include <algorithm>
using namespace std;

// прямоугольник
struct encryptionNumbers {
    string text;
    string numbers;
};

// Ввод параметров текста из файла
void In(encryptionNumbers &n, ifstream &ifst);

// Вывод параметров текста в форматируемый поток
void Out(encryptionNumbers &n, ofstream &ofst);


#endif //__encryptionNumbers__
