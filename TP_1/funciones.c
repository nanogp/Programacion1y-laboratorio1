#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int mostrarMenuDeOpciones(char primerNumeroYaSeIngreso, char segundoNumeroYaSeIngreso, float numero1, float numero2, int cantidadDecimales)
{
    int retorno;

    system("cls");
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
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%.*f)\n", cantidadDecimales, numero1);
            printf("2- Ingresar 2do operando (B)\n");
            printf("7- Calcular el factorial (A!)\n");
        }
    }
    else
    {
        if(segundoNumeroYaSeIngreso == 'S')
        {
            printf("1- Ingresar 1er operando (A)\n");
            printf("2- Ingresar 2do operando (B=%.*f)\n", cantidadDecimales, numero2);
        }
        else
        {
            printf("1- Ingresar 1er operando (A)\n");
            printf("2- Ingresar 2do operando (B)\n");
        }
    }

    printf("9- Salir\n");
    printf("Elegir una de las opciones: ");
    scanf("%d",&retorno);
    return retorno;
}


int chequearSiTieneDecimalesFloat(float numero)
{
    int retorno = 0;
    int parteEntera;

    parteEntera = (int)numero;

    if((float)parteEntera != numero)
    {
        retorno = 1;
    }

    return retorno;
}


int validarDivisionEsPosible(float divisor)
{
    int retorno = 0;

    if(divisor != 0)
    {
        retorno = 1;
    }
    else
    {
        printf("\nEl divisor no puede ser cero");
    }

    return retorno;
}


int validarFactorialEsPosible(float numero)
{
    int retorno = 0;

    if(numero >= 0 && chequearSiTieneDecimalesFloat(numero) == 0)
    {
        retorno = 1;
    }
    else
    {
        printf("\nSolo se calcular  el factorial de n£meros enteros positivos sin decimales");
    }

    return retorno;
}


void mostrarResultado(char nombreOperacion[], float numero1, float numero2, float resultado, int cantidadDecimales, char limpiarPantalla, char hacerPausa)
{
    int numero1TienecantidadDecimales;
    int numero2TienecantidadDecimales;
    int resultadoTienecantidadDecimales;
    int esFactorial = 0;

    if(nombreOperacion[0] == 'f')
    {
        esFactorial = 1;
    }

    if(limpiarPantalla == 'S')
    {
        system("cls");
    }

    if (esFactorial == 0)
    {
        numero1TienecantidadDecimales = chequearSiTieneDecimalesFloat(numero1);
        numero2TienecantidadDecimales = chequearSiTieneDecimalesFloat(numero2);
        resultadoTienecantidadDecimales = chequearSiTieneDecimalesFloat(resultado);


        if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 0)
        {
            printf("\nEl resultado de la %s entre %.0f y %.0f es: %.0f\n", nombreOperacion, numero1, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 1)
        {
            printf("\nEl resultado de la %s entre %.0f y %.0f es: %.*f\n", nombreOperacion, numero1, numero2, cantidadDecimales, resultado);
        }
        else if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 0)
        {
            printf("\nEl resultado de la %s entre %.0f y %.*f es: %.0f\n", nombreOperacion, numero1, cantidadDecimales, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 0 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 1)
        {
            printf("\nEl resultado de la %s entre %.0f y %.*f es: %.*f\n", nombreOperacion, numero1, cantidadDecimales, numero2, cantidadDecimales, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 0)
        {
            printf("\nEl resultado de la %s entre %.*f y %.0f es: %.0f\n", nombreOperacion, cantidadDecimales, numero1, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 0 && resultadoTienecantidadDecimales == 1)
        {
            printf("\nEl resultado de la %s entre %.*f y %.0f es: %.*f\n", nombreOperacion, cantidadDecimales, numero1, numero2, cantidadDecimales, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 0)
        {
            printf("\nEl resultado de la %s entre %.*f y %.*f es: %.0f\n", nombreOperacion, cantidadDecimales, numero1, cantidadDecimales, numero2, resultado);
        }
        else if(numero1TienecantidadDecimales == 1 && numero2TienecantidadDecimales == 1 && resultadoTienecantidadDecimales == 1)
        {
            printf("\nEl resultado de la %s entre %.*f y %.*f es: %.*f\n", nombreOperacion, cantidadDecimales, numero1, cantidadDecimales, numero2, cantidadDecimales, resultado);
        }
    }
    else
    {
        printf("El factorial de %.0f es: %.0f\n", numero1, resultado);
    }

    if(hacerPausa == 'S')
    {
        system("pause");
    }
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

    system("cls");
    fflush(stdin);
    printf("%s: ", mensajeIngreso);
    scanf("%f", &numero);

    numero = validarFloat(numero, minimo, maximo, mensajeReingreso);

    return numero;
}

float sumarFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 + numero2;

    return resultado;
}

float restarFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 - numero2;

    return resultado;
}

float multiplicarFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 * numero2;

    return resultado;
}

float dividirFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 / numero2;

    return resultado;
}


float calcularFactorialInt(int numero)
{
    float resultado;
    int multiplicando;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero;
        for(multiplicando = numero - 1 ; multiplicando > 0 ; multiplicando--)
        {
            resultado *= multiplicando;
        }
    }

    return resultado;
}
