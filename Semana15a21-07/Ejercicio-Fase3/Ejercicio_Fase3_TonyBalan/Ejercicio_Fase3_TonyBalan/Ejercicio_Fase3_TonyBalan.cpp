#include "pch.h"
#include <cstdio>
#include <math.h>
#include <string>

using namespace System;

/// <summary>
/// Tony Balan
/// </summary>

class Operaciones {
public:

    //Constructor para la clase de operaciones básicas
    Operaciones() {}

    //Sobrecarga de métodos y métodos normales
    int suma(int primerNumero, int segundoNumero) {
        return primerNumero + segundoNumero;

    }

    int suma(int primerNumero, int segundoNumero, int tercerNumero) {
        return primerNumero + segundoNumero + tercerNumero;

    }

    int resta(int primerNumero, int segundoNumero) {
        return primerNumero - segundoNumero;

    }

    int resta(int primerNumero, int segundoNumero, int tercerNumero) {
        return primerNumero - segundoNumero - tercerNumero;
    }

    int multiplicacion(int primerNumero, int segundoNumero) {
        return primerNumero * segundoNumero;
    }

    int multiplicacion(int primerNumero, int segundoNumero, int tercerNumero) {
        return primerNumero * segundoNumero * tercerNumero;

    }
    double division(int primerNumero, int segundoNumero) {
        return static_cast<double> (primerNumero) / segundoNumero;
    }
    double division(int primerNumero, int segundoNumero, int tercerNumero) {
        float respuestaDivision = static_cast<double> (primerNumero) / segundoNumero;
        return respuestaDivision / tercerNumero;
    }
};

class OperacionesCientificas : public Operaciones {
public:

    //Constructor para funciones científicas
    OperacionesCientificas() : Operaciones() {}
    int potencia(int primerNumero, int segundoNumero) {
        return pow(primerNumero, segundoNumero);
    }
    int potencia(int primerNumero, int segundoNumero, int tercerNumero) {
        double respuestaPotencia = pow(primerNumero, segundoNumero);
        return pow(respuestaPotencia, tercerNumero);
    }
    double raiz(int primerNumero) {
        return sqrt(primerNumero);
    }
};

int main(array<System::String^>^ args)
{
    //Declarar las variables de los números
    int primerNumero = 0;
    int segundoNumero = 0;
    int tercerNumero = 0;
    int respuesta = 0;

    //instantancia de la clase "operacionescientíficas" para poder acceder a todas la operaciones
    OperacionesCientificas operacion;

    //Preguntar al usuario si desea operar dos o tres números
    printf("Hola usuario, bienvenido a la calculadora.\n");
    printf("Indique la cantidad de numero que desea operar. Solo puede elegir '2' o '3' numeros. Ingrese solo el numero: \n");
    scanf_s("%d", &respuesta);

    //Condicional
    if (respuesta == 3)
    {
        printf("------------- Ha elegido tres numeros -----------------\n");
        printf("Ingrese el primer primer numero para operar: \n");
        scanf_s("%d", &primerNumero);
        printf("Ingrese el segundo numero: \n");
        scanf_s("%d", &segundoNumero);
        printf("Ingrese el tercer numero para operar: \n");
        scanf_s("%d", &tercerNumero);

        //Llamar métodos sobrecargados
        printf("La suma es: %d\n", operacion.suma(primerNumero, segundoNumero, tercerNumero));
        printf("La resta es: %d\n", operacion.resta(primerNumero, segundoNumero, tercerNumero));
        printf("La multiplicacion es: %d\n", operacion.multiplicacion(primerNumero, segundoNumero, tercerNumero));
        if (segundoNumero == 0)
        {
            printf("No se puede dividir entre cero.");
        }
        else
        {
            if (tercerNumero == 0)
            {
                printf("No se puede dividir entre cero.");
            }
            else
            {
                printf("La division es: %f\n", operacion.division(primerNumero, segundoNumero, tercerNumero));
            }
        }
        printf("La potencia de los numeros operados consecutivamente es: %d\n", operacion.potencia(primerNumero, segundoNumero, tercerNumero));


        if (primerNumero < 0)
        {
            printf("No se puede obtener raiz de negativos.");
        }
        else
        {
            printf("La raiz es: %f\n", operacion.raiz(primerNumero));
        }
    }

    //Operaciones con dos numeros
    else if (respuesta == 2)
        {
            printf("------------------ Ha elegido dos numeros -------------------\n");
            printf("Ingrese el primer numero para operar: \n");
            scanf_s("%d", &primerNumero);
            printf("Ingrese el segundo numero: \n");
            scanf_s("%d", &segundoNumero);

            printf("La suma es: %d\n", operacion.suma(primerNumero, segundoNumero));
            printf("La resta es: %d\n", operacion.resta(primerNumero, segundoNumero));
            printf("La multiplicacion es: %d\n", operacion.multiplicacion(primerNumero, segundoNumero));
            if (segundoNumero == 0)
            {
                printf("No se puede dividir entre cero.");
            }
            else
            {
                printf("La division es: %f\n", operacion.division(primerNumero, segundoNumero));
            }
            printf("La potencia es: %d\n", operacion.potencia(primerNumero, segundoNumero));

            if (primerNumero < 0)
            {
                printf("No se puede obtener raiz de negativos.");
            }
            else
            {
                printf("La raiz es: %f\n", operacion.raiz(primerNumero));
            }
    }
    else
    {
        printf("La opcion que ha elegido no es correcta, intente de nuevo por favor.");
    }
};
