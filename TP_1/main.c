#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"
#include "funciones.h"
#define DECIMALES_FLOAT 4

int main()
{
    const char limpiarPantalla      = 'S';
    const char noLimpiarPantalla    = 'N';
    const char hacerPausa           = 'S';
    const char noHacerPausa         = 'N';
    char primerNumeroYaSeIngreso    = 'N';
    char segundoNumeroYaSeIngreso   = 'N';
    char seguir                     = 'S';
    float limiteInferiorRango       = -127;
    float limiteSuperiorRango       = 128;
    float numero1;
    float numero2;
    float resultado;
    int opcion;

    while(seguir=='S')
    {

        opcion = mostrarMenuDeOpciones(primerNumeroYaSeIngreso, segundoNumeroYaSeIngreso, numero1, numero2, DECIMALES_FLOAT);

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
                mostrarResultado("+", numero1, numero2, resultado, DECIMALES_FLOAT, limpiarPantalla, hacerPausa);
                break;
            case 4:
                resultado = restarFloat(numero1, numero2);
                mostrarResultado("-", numero1, numero2, resultado, DECIMALES_FLOAT, limpiarPantalla, hacerPausa);
                break;
            case 5:
                if(validarDivisionEsPosible(numero2) == 1)
                {
                    resultado = dividirFloat(numero1, numero2);
                    mostrarResultado("/", numero1, numero2, resultado, DECIMALES_FLOAT, limpiarPantalla, hacerPausa);
                }
                else
                {
                    ejecutarEnConsola("cls");
                    ejecutarEnConsola("pause");
                }
                break;
            case 6:
                resultado = multiplicarFloat(numero1, numero2);
                mostrarResultado("*", numero1, numero2, resultado, DECIMALES_FLOAT, limpiarPantalla, hacerPausa);
                break;
            case 7:
                if(validarFactorialEsPosible(numero1) == 1)
                {
                    resultado = calcularFactorialInt(numero1);
                    mostrarResultado("!", numero1, 0, resultado, DECIMALES_FLOAT, limpiarPantalla, hacerPausa);
                }
                else
                {
                    ejecutarEnConsola("cls");
                    ejecutarEnConsola("pause");
                }
                break;
            case 8:
                resultado = sumarFloat(numero1, numero2);
                mostrarResultado("+", numero1, numero2, resultado, DECIMALES_FLOAT, limpiarPantalla, noHacerPausa);

                resultado = restarFloat(numero1, numero2);
                mostrarResultado("-", numero1, numero2, resultado, DECIMALES_FLOAT, noLimpiarPantalla, noHacerPausa);

                if(validarDivisionEsPosible(numero2) == 1)
                {
                    resultado = dividirFloat(numero1, numero2);
                    mostrarResultado("/", numero1, numero2, resultado, DECIMALES_FLOAT, noLimpiarPantalla, noHacerPausa);
                }

                resultado = multiplicarFloat(numero1, numero2);
                mostrarResultado("*", numero1, numero2, resultado, DECIMALES_FLOAT, noLimpiarPantalla, noHacerPausa);

                if(validarFactorialEsPosible(numero1) == 1)
                {
                    resultado = calcularFactorialInt(numero1);
                    mostrarResultado("!", numero1, 0, resultado, DECIMALES_FLOAT, noLimpiarPantalla, noHacerPausa);
                }
                ejecutarEnConsola("pause");
                break;
            case 9:
                seguir = 'N';
                break;
        }//switch
    }//while
    return 0;
}
