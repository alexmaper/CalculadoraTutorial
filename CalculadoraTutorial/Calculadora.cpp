#include "Calculadora.h"

double Calculadora::Calcular(double x, char abrir, double y)
{
    switch (abrir)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}
