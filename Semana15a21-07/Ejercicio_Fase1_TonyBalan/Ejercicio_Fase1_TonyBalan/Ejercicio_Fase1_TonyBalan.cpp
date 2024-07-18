#include "pch.h"
#include <cstdio>
#include <math.h>

using namespace System;

/// <summary>
/// Tony Balan y Edson Galdamez
/// </summary>

class Operaciones {
public:

    Operaciones() {}

    int suma(int primerNumero, int segundoNumero) {
        return primerNumero + segundoNumero;
 
    }
    int resta(int primerNumero, int segundoNumero) {
        return primerNumero - segundoNumero;
       
    }
    int multiplicacion(int primerNumero, int segundoNumero) {
        return primerNumero * segundoNumero;
    }
    int division(int primerNumero, int segundoNumero) {
        return primerNumero / segundoNumero;
    }
};

class OperacionesCientificas : public Operaciones {
public:

    OperacionesCientificas() : Operaciones() {}
    int potencia(int primerNumero, int segundoNumero) {
        return pow(primerNumero, segundoNumero);
    }
    double raiz(int primerNumero) {
        return sqrt(primerNumero);
    }

};

int main(array<System::String^>^ args)
{
    int primerNumero = 0;
    int segundoNumero = 0;
    printf("Hola, por favor ingrese el primer primer numero para operar: \n");
    scanf_s("%d", &primerNumero);
    printf("Ingrese el segundo numero: \n");
    scanf_s("%d", &segundoNumero);

    OperacionesCientificas operacion;

    printf("La suma es: %d\n", operacion.suma(primerNumero, segundoNumero));
    printf("La resta es: %d\n", operacion.resta(primerNumero, segundoNumero));
    printf("La multiplicacion es: %d\n", operacion.multiplicacion(primerNumero, segundoNumero));
    if (segundoNumero == 0)
    {
        printf("No se puede dividir entre cero.");
    }
    else
    {
        printf("La division es: %d\n", operacion.division(primerNumero, segundoNumero));
    }
    printf("La potencia es: %d\n", operacion.potencia(primerNumero, segundoNumero));

    if (primerNumero < 0)
    {
        printf("No se puede sacar raiz de negativos.");
    }
    else
    {
        printf("La raiz es: %lf\n", operacion.raiz(primerNumero));
    }
};
