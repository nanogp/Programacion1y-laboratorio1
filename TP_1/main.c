#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    float resultado;
    double resultadoDouble;
    int decimalesFlotante = 2;
    int decimalesDouble = 0;
    char primerNumeroYaSeIngreso = 'N';
    char segundoNumeroYaSeIngreso = 'N';

    while(seguir=='s')
    {

        opcion = mostrarMenuDeOpciones(primerNumeroYaSeIngreso, segundoNumeroYaSeIngreso, numero1, numero2);

        switch(opcion)
        {
            case 1:
                numero1 = pedirNumero(1, 10, "Ingrese un numero", "Reingrese un numero.");
                break;
            case 2:
                numero2 = pedirNumero(1, 10, "Ingrese un numero", "Reingrese un numero.");
                break;
            case 3:
                resultado = sumarFlotantes(numero1, numero2);
                mostrarResultado("suma", numero1, numero2, resultado, decimalesFlotante);
                break;
            case 4:
                resultado = restarFlotantes(numero1, numero2);
                mostrarResultado("resta", numero1, numero2, resultado, decimalesFlotante);
                break;
            case 5:
                resultado = dividirFlotantes(numero1, numero2);
                mostrarResultado("division", numero1, numero2, resultado, decimalesFlotante);
                break;
            case 6:
                resultado = multiplicarFlotantes(numero1, numero2);
                mostrarResultado("multiplicacion", numero1, numero2, resultado, decimalesFlotante);
                break;
            case 7:
                resultadoDouble = calcularFactorialEntero(numero1);
                system("cls");
                printf("\nEl resultado de %.0f! es: %.0ll\n", numero1, resultadoDouble);
                system("pause");
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    };
    return 0;
}
