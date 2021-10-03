#ifndef __encryptionShift__
#define __encryptionShift__

//--------------------------------------------------------------------------------
// encryptionNumbers.h - содержит описание шифра с числом сдвига и его интерфейса
//--------------------------------------------------------------------------------

#include <fstream>
#include <valarray>
using namespace std;

// прямоугольник
struct encryptionShift {
    string text;
    int n;
};

// Ввод параметров текста из файла
void In(encryptionShift &s, ifstream &ifst);

// Вывод параметров текста в форматируемый поток
void Out(encryptionShift &s, ofstream &ofst);


#endif //__encryptionShift__
