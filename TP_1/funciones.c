#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int validarEntero(int numero, int minimo, int maximo, char mensajeReingreso[])
{
    while(numero < minimo || numero > maximo)
    {
        fflush(stdin);
        printf("%s (entre %d y %d): ", mensajeReingreso, minimo, maximo);
        scanf("%d", &numero);
    }

    return numero;
};

int pedirEntero(int minimo, int maximo, char mensajeIngreso[], char mensajeReingreso[])
{
    int numero;

    system("cls");
    fflush(stdin);
    printf("%s: ", mensajeIngreso);
    scanf("%d", &numero);

    numero = validarEntero(numero, minimo, maximo, mensajeReingreso);

    return numero;
};

int sumarEnteros(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 + numero2;

    return resultado;
};

int restarEnteros(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 - numero2;

    return resultado;
};

int multiplicarEnteros(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 * numero2;

    return resultado;
};

float dividirEnteros(int numero1, int numero2)
{
    float resultado;

    resultado = (float)numero1 / numero2;

    return resultado;
};

long long calcularFactorial(int numero)
{
    long long resultado = numero;
    int multiplicando;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        for(multiplicando = numero - 1 ; multiplicando >= 1 ; multiplicando--)
        {
            resultado *= multiplicando;
        }
    };

    return resultado;
};

void mostrarResultado(char nombreOperacion[], int numero1, int numero2, float resultado, int decimales)
{
    system("cls");
    printf("\nEl resultado de la %s entre %d y %d es: %.*f\n", nombreOperacion, numero1, numero2, decimales, resultado);
    system("pause");
};
