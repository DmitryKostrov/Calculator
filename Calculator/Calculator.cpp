#include <iostream>
#include "LibraryCalculator.h"

using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;
    char oper = '+';

    setlocale(LC_ALL, "Rus");
    cout << "Привет данная программа созданна для простых алгебраических вычислений. Формат ввода: | a+b | a-b | a*b | a/b | \n";
    
    LibraryCalculator lib;

    while (true)
    {
        cin >> a >> oper >> b;
        result = lib.Calculate(a, oper, b);
        cout << "Результат операции: " << result << "\n";
    }
    return 0;
}
