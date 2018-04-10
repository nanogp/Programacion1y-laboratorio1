#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='S';
    char primerNumeroYaSeIngreso = 'N';
    char segundoNumeroYaSeIngreso = 'N';
    char limpiarPantalla = 'S';
    char noLimpiarPantalla = 'N';
    char hacerPausa = 'S';
    char noHacerPausa = 'N';
    int opcion = 0;
    int decimalesFloat = 4;
    float numero1;
    float numero2;
    float resultado;
    float limiteInferiorRango = -127;
    float limiteSuperiorRango = 128;

    while(seguir=='S')
    {

        opcion = mostrarMenuDeOpciones(primerNumeroYaSeIngreso, segundoNumeroYaSeIngreso, numero1, numero2, decimalesFloat);

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
                mostrarResultado("suma", numero1, numero2, resultado, decimalesFloat, limpiarPantalla, hacerPausa);
                break;
            case 4:
                resultado = restarFloat(numero1, numero2);
                mostrarResultado("resta", numero1, numero2, resultado, decimalesFloat, limpiarPantalla, hacerPausa);
                break;
            case 5:
                if(validarDivisionEsPosible(numero2) != 0)
                {
                    resultado = dividirFloat(numero1, numero2);
                    mostrarResultado("divisi¢n", numero1, numero2, resultado, decimalesFloat, noLimpiarPantalla, noHacerPausa);
                }
                break;
            case 6:
                resultado = multiplicarFloat(numero1, numero2);
                mostrarResultado("multiplicaci¢n", numero1, numero2, resultado, decimalesFloat, limpiarPantalla, hacerPausa);
                break;
            case 7:
                if(validarFactorialEsPosible(numero1) != 0)
                {
                    resultado = calcularFactorialInt(numero1);
                    mostrarResultado("factorial", numero1, 0, resultado, decimalesFloat, limpiarPantalla, hacerPausa);
                }
                break;
            case 8:
                resultado = sumarFloat(numero1, numero2);
                mostrarResultado("suma", numero1, numero2, resultado, decimalesFloat, limpiarPantalla, noHacerPausa);

                resultado = restarFloat(numero1, numero2);
                mostrarResultado("resta", numero1, numero2, resultado, decimalesFloat, noLimpiarPantalla, noHacerPausa);

                if(validarDivisionEsPosible(numero2) != 0)
                {
                    resultado = dividirFloat(numero1, numero2);
                    mostrarResultado("divisi¢n", numero1, numero2, resultado, decimalesFloat, noLimpiarPantalla, noHacerPausa);
                }

                resultado = multiplicarFloat(numero1, numero2);
                mostrarResultado("multiplicaci¢n", numero1, numero2, resultado, decimalesFloat, noLimpiarPantalla, noHacerPausa);

                if(validarFactorialEsPosible(numero1) != 0)
                {
                    resultado = calcularFactorialInt(numero1);
                    mostrarResultado("factorial", numero1, 0, resultado, decimalesFloat, noLimpiarPantalla, hacerPausa);
                }
                else
                {
                    system("pause");
                }
                break;
            case 9:
                seguir = 'N';
                break;
        }//switch
    }//while
    return 0;
}
