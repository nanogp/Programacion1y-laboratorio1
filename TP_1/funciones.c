#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int mostrarMenuDeOpciones(char primerNumeroYaSeIngreso, char segundoNumeroYaSeIngreso, float numero1, float numero2)
{
    int retorno;

    system("cls");
    if(primerNumeroYaSeIngreso == 'S')
    {
        if(segundoNumeroYaSeIngreso == 'S')
        {
            printf("1- Ingresar 1er operando (A=%f)\n", numero1);
            printf("2- Ingresar 2do operando (B=%f)\n", numero2);
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicaci¢n (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operaciones\n");
            printf("9- Salir\n");
            printf("Elegir una de las opciones: ");
            scanf("%d",&retorno);
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n", numero1);
            printf("2- Ingresar 2do operando (B=%f)\n", numero2);
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operaciones\n");
            printf("9- Salir\n");
            printf("Elegir una de las opciones: ");
            scanf("%d",&retorno);
        }
    }
    else
    {
        printf("1- Ingresar 1er operando (A=)\n");
        printf("2- Ingresar 2do operando (B=)\n");
        printf("9- Salir\n");
        printf("Elegir una de las opciones: ");
        scanf("%d",&retorno);
    }

    return retorno;
};


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


void mostrarResultado(char nombreOperacion[], float numero1, float numero2, float resultado, int decimales)
{
    int opcion;

    opcion = chequearSiTieneDecimalesFloat(numero1);
    opcion = opcion + (chequearSiTieneDecimalesFloat(numero2) * 10);
    opcion = opcion + (chequearSiTieneDecimalesFloat(resultado) * 100);

    system("cls");

    //CODIFICO TODAS LAS OPCIONES EXPLICITAS PARA QUE SEA MAS FACIL LEER TODAS LAS COMBINACIONES
    switch(opcion)
    {
        case 000:
            printf("\nEl resultado de la %s entre %.0f y %.0f es: %.0f\n", nombreOperacion, numero1, numero2, resultado);
            break;
        case 001:
            printf("\nEl resultado de la %s entre %.0f y %.0f es: %.*f\n", nombreOperacion, numero1, numero2, decimales, resultado);
            break;
        case 010:
            printf("\nEl resultado de la %s entre %.0f y %.*f es: %.0f\n", nombreOperacion, numero1, decimales, numero2, resultado);
            break;
        case 011:
            printf("\nEl resultado de la %s entre %.0f y %.*f es: %.*f\n", nombreOperacion, numero1, decimales, numero2, decimales, resultado);
            break;
        case 100:
            printf("\nEl resultado de la %s entre %.*f y %.0f es: %.0f\n", nombreOperacion, decimales, numero1, numero2, resultado);
            break;
        case 101:
            printf("\nEl resultado de la %s entre %.*f y %.0f es: %.*f\n", nombreOperacion, decimales, numero1, numero2, decimales, resultado);
            break;
        case 110:
            printf("\nEl resultado de la %s entre %.*f y %.*f es: %.0f\n", nombreOperacion, decimales, numero1, decimales, numero2, resultado);
            break;
        case 111:
            printf("\nEl resultado de la %s entre %.*f y %.*f es: %.*f\n", nombreOperacion, decimales, numero1, decimales, numero2, decimales, resultado);
            break;
    }

/*
    if(numero1TieneDecimales == 0 && numero2TieneDecimales == 0 && resultadoTieneDecimales == 0)
    {
        printf("\nEl resultado de la %s entre %.0f y %.0f es: %.0f\n", nombreOperacion, numero1, numero2, resultado);
    }
    else if(numero1TieneDecimales == 0 && numero2TieneDecimales == 0 && resultadoTieneDecimales == 1)
    {
        printf("\nEl resultado de la %s entre %.0f y %.0f es: %.*f\n", nombreOperacion, numero1, numero2, decimales, resultado);
    }
    else if(numero1TieneDecimales == 0 && numero2TieneDecimales == 1 && resultadoTieneDecimales == 0)
    {
        printf("\nEl resultado de la %s entre %.0f y %.*f es: %.0f\n", nombreOperacion, numero1, decimales, numero2, resultado);
    }
    else if(numero1TieneDecimales == 0 && numero2TieneDecimales == 1 && resultadoTieneDecimales == 1)
    {
        printf("\nEl resultado de la %s entre %.0f y %.*f es: %.*f\n", nombreOperacion, numero1, decimales, numero2, decimales, resultado);
    }
    else if(numero1TieneDecimales == 1 && numero2TieneDecimales == 0 && resultadoTieneDecimales == 0)
    {
        printf("\nEl resultado de la %s entre %.*f y %.0f es: %.0f\n", nombreOperacion, decimales, numero1, numero2, resultado);
    }
    else if(numeopcion[0]ro1TieneDecimales == 1 && numero2TieneDecimales == 0 && resultadoTieneDecimales == 1)
    {
        printf("\nEl resultado de la %s entre %.*f y %.0f es: %.*f\n", nombreOperacion, decimales, numero1, numero2, decimales, resultado);
    }
    else if(numero1TieneDecimales == 1 && numero2TieneDecimales == 1 && resultadoTieneDecimales == 0)
    {
        printf("\nEl resultado de la %s entre %.*f y %.*f es: %.0f\n", nombreOperacion, decimales, numero1, decimales, numero2, resultado);
    }
    else if(numero1TieneDecimales == 1 && numero2TieneDecimales == 1 && resultadoTieneDecimales == 1)
    {
        printf("\nEl resultado de la %s entre %.*f y %.*f es: %.*f\n", nombreOperacion, decimales, numero1, decimales, numero2, decimales, resultado);
    }
*/
    system("pause");
};


float validarFloat(float numero, float minimo, float maximo, char mensajeReingreso[])
{
    while(numero < minimo || numero > maximo)
    {
        fflush(stdin);
        printf("%s (entre %f y %f): ", mensajeReingreso, minimo, maximo);
        scanf("%f", &numero);
    }

    return numero;
};


float pedirFloat(float minimo, float maximo, char mensajeIngreso[], char mensajeReingreso[])
{
    float numero;

    system("cls");
    fflush(stdin);
    printf("%s: ", mensajeIngreso);
    scanf("%f", &numero);

    numero = validarFloat(numero, minimo, maximo, mensajeReingreso);

    return numero;
};

float sumarFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 + numero2;

    return resultado;
};

float restarFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 - numero2;

    return resultado;
};

float multiplicarFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 * numero2;

    return resultado;
};

float dividirFloat(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 / numero2;

    return resultado;
};


double calcularFactorialInt(int numero)
{
    double resultado;
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
};


double calcularFactorialFloatSinDecimales(float numero)
{
    double resultado;

    if(chequearSiTieneDecimalesFloat(numero) == 0)
    {
        resultado = calcularFactorialFloatSinDecimales(numero);
    }
    else
    {
        printf("Solo se calcular  el factorial de n£meros enteros (sin decimales)");
    }

    return resultado;
}
