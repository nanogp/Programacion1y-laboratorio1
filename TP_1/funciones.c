#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"


void ejecutarEnConsola(char instruccion[])
{
    fflush(stdin);
    printf("\n");
    system(instruccion);
}


int pedirOpcionDeMenu(int opcionesValidas[], int tam)
{
    int opcion;
    int i = -1;
    int opcionValida = 0;

    do
    {
        fflush(stdin);

        if(i == -1)
        {
            printf("\nElija una opci¢n de men£: ");
        }
        else
        {
            //armo lista de opciones en el renglón por si el usuario se equivoca muchas veces
            //y el menú queda fuera de vista
            for(i = 0 ; i < tam ; i++)
            {
                if(i == 0)
                {
                    printf("\nOpci¢n %d no v lida. Elija una opci¢n de men£ de la lista\n(%d", opcion, opcionesValidas[i]);
                }
                else
                {
                    if(i < tam-1)
                    {
                        printf("-%d", opcionesValidas[i]);
                    }
                    else
                    {
                        printf("-%d): ", opcionesValidas[i]);
                    }
                }
            }//for
        }

        scanf("%d", &opcion);

        //valido buscando opcion en la lista
        for(i = 0 ; i < tam ; i++)
        {
            if(opcion == opcionesValidas[i])
            {
                opcionValida = 1;
            }
        }

    }
    while(opcionValida == 0);

    return opcion;
}


float validarFloat(float numero, float minimo, float maximo, char mensajeReingreso[])
{
    while(numero < minimo || numero > maximo)
    {
        fflush(stdin);
        printf("%s (entre %f y %f): ", mensajeReingreso, minimo, maximo);
        scanf("%f", &numero);
    }

    return numero;
}


float pedirFloat(float minimo, float maximo, char mensajeIngreso[], char mensajeReingreso[])
{
    float numero;

    ejecutarEnConsola("cls");
    fflush(stdin);
    printf("%s: ", mensajeIngreso);
    scanf("%f", &numero);

    numero = validarFloat(numero, minimo, maximo, mensajeReingreso);

    return numero;
}


void mostrarResultado(char operacion, float numero1, float numero2, float resultado, int cantidadDecimales, char limpiarPantalla, char hacerPausa)
{
    int numero1TienecantidadDecimales;
    int numero2TienecantidadDecimales;
    int resultadoTienecantidadDecimales;
    int esFactorial = 0;

    if(operacion == '!')
    {
        esFactorial = 1;
    }

    if(limpiarPantalla == 'S')
    {
        ejecutarEnConsola("cls");
    }

    if (esFactorial == 0)
    {
        numero1TienecantidadDecimales = chequearSiTieneDecimalesFloat(numero1);
        numero2TienecantidadDecimales = chequearSiTieneDecimalesFloat(numero2);
        resultadoTienecantidadDecimales = chequearSiTieneDecimalesFloat(resultado);

        //codifico todos los casos para que sea mas facil comprender el codigo
        if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 0)
        {
            printf("\n%.0f %c %.0f = %.0f", numero1, operacion, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 1)
        {
            printf("\n%.0f %c %.0f = %.*f", numero1, operacion, numero2, cantidadDecimales, resultado);
        }
        else if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 0)
        {
            printf("\n%.0f %c %.*f = %.0f", numero1, operacion, cantidadDecimales, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 1)
        {
            printf("\n%.0f %c %.*f = %.*f", numero1, operacion, cantidadDecimales, numero2, cantidadDecimales, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 0)
        {
            printf("\n%.*f %c %.0f = %.0f", cantidadDecimales, numero1, operacion, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 1)
        {
            printf("\n%.*f %c %.0f = %.*f", cantidadDecimales, numero1, operacion, numero2, cantidadDecimales, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 0)
        {
            printf("\n%.*f %c %.*f = %.0f", cantidadDecimales, numero1, operacion, cantidadDecimales, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 1)
        {
            printf("\n%.*f %c %.*f = %.*f", cantidadDecimales, numero1, operacion, cantidadDecimales, numero2, cantidadDecimales, resultado);
        }
    }
    else
    {
        printf("\n%.0f! = %.0f", numero1, resultado);
    }

    if(hacerPausa == 'S')
    {
        ejecutarEnConsola("pause");
    }
}


int mostrarMenuDeOpciones(char primerNumeroYaSeIngreso, char segundoNumeroYaSeIngreso, float numero1, float numero2, int cantidadDecimales)
{
    int retorno;
    int listaOpcionesConAyB[9] = {1,2,3,4,5,6,7,8,9};
    int listaOpcionesConA[4] = {1,2,7,9};
    int listaOpcionesSinA[3] = {1,2,9};

    ejecutarEnConsola("cls");
    if(primerNumeroYaSeIngreso == 'S')
    {
        if(segundoNumeroYaSeIngreso == 'S')
        {
            printf("1- Ingresar 1er operando (A=%.*f)\n", cantidadDecimales, numero1);
            printf("2- Ingresar 2do operando (B=%.*f)\n", cantidadDecimales, numero2);
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicaci¢n (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operaciones\n");
            printf("9- Salir\n");
            retorno = pedirOpcionDeMenu(listaOpcionesConAyB, 9);
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%.*f)\n", cantidadDecimales, numero1);
            printf("2- Ingresar 2do operando (B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("9- Salir\n");
            retorno = pedirOpcionDeMenu(listaOpcionesConA, 4);
        }
    }
    else
    {
        if(segundoNumeroYaSeIngreso == 'S')
        {
            printf("1- Ingresar 1er operando (A)\n");
            printf("2- Ingresar 2do operando (B=%.*f)\n", cantidadDecimales, numero2);
            printf("9- Salir\n");
            retorno = pedirOpcionDeMenu(listaOpcionesSinA, 3);
        }
        else
        {
            printf("1- Ingresar 1er operando (A)\n");
            printf("2- Ingresar 2do operando (B)\n");
            printf("9- Salir\n");
            retorno = pedirOpcionDeMenu(listaOpcionesSinA, 3);
        }
    }

    return retorno;
}
