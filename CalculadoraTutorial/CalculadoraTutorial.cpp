

#include <iostream>
#include "Calculadora.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double resultado = 0.0;
    char abrir = '+';

    cout << "Aplicativo Calculadora " << endl << endl;
    cout << "Por favor digite seus calculo. Nos Formatos: a+b | a-b | a*b | a/b"
        << endl;

    Calculadora c;
    while (true)
    {
        cin >> x >> abrir >> y;
        if (abrir == '/' && y == 0)
        {
            cout << "Divisão por 0 exceção" << endl;
            continue;
        }
        else
        {
            resultado = c.Calcular(x, abrir, y);
        }
        cout << "Resultado: " << resultado << endl;
    }

    return 0;
}