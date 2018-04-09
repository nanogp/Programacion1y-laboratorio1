#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='S';
    int opcion=0;
    float numero1;
    float numero2;
    float resultado;
    double resultadoDouble;
    float limiteInferiorRango = -127;
    float limiteSuperiorRango = 128;
    int decimalesFloat = 4;
    char primerNumeroYaSeIngreso = 'N';
    char segundoNumeroYaSeIngreso = 'N';

    while(seguir=='S')
    {

        opcion = mostrarMenuDeOpciones(primerNumeroYaSeIngreso, segundoNumeroYaSeIngreso, numero1, numero2);

        switch(opcion)
        {
            case 1:
                numero1 = pedirFloat(limiteInferiorRango, limiteSuperiorRango, "Ingrese un numero", "Reingrese un numero.");
                primerNumeroYaSeIngreso = 'S';
                break;
            case 2:
                numero2 = pedirFloat(limiteInferiorRango, limiteSuperiorRango, "Ingrese un numero", "Reingrese un numero.");
                segundoNumeroYaSeIngreso = 'S';
                break;
            case 3:
                resultado = sumarFloat(numero1, numero2);
                mostrarResultado("suma", numero1, numero2, resultado, decimalesFloat);
                break;
            case 4:
                resultado = restarFloat(numero1, numero2);
                mostrarResultado("resta", numero1, numero2, resultado, decimalesFloat);
                break;
            case 5:
                resultado = dividirFloat(numero1, numero2);
                mostrarResultado("division", numero1, numero2, resultado, decimalesFloat);
                break;
            case 6:
                resultado = multiplicarFloat(numero1, numero2);
                mostrarResultado("multiplicacion", numero1, numero2, resultado, decimalesFloat);
                break;
            case 7:
                resultadoDouble = calcularYMostrarFactorialFloatSinDecimales(numero1);
                break;
            case 8:
                break;
            case 9:
                seguir = 'N';
                break;
        }//switch
    }//while
    return 0;
}
