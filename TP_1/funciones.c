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
            printf("6- Calcular la multiplicacion (A*B)\n");
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
            printf("9- Salir\n");
            printf("Elegir una de las opciones: ");
            scanf("%d",&retorno);
        }
    }
    else
    {
        printf("1- Ingresar 1er operando (A=%f)\n", numero1);
        printf("2- Ingresar 2do operando (B=%f)\n", numero2);
        printf("9- Salir\n");
        printf("Elegir una de las opciones: ");
        scanf("%d",&retorno);
    }

    return retorno;
};

int validarNumero(float numero, float minimo, float maximo, char mensajeReingreso[])
{
    while(numero < minimo || numero > maximo)
    {
        fflush(stdin);
        printf("%s (entre %f y %f): ", mensajeReingreso, minimo, maximo);
        scanf("%f", &numero);
    }

    return numero;
};

float pedirNumero(float minimo, float maximo, char mensajeIngreso[], char mensajeReingreso[])
{
    float numero;

    system("cls");
    fflush(stdin);
    printf("%s: ", mensajeIngreso);
    scanf("%f", &numero);

    numero = validarNumero(numero, minimo, maximo, mensajeReingreso);

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

double calcularFactorial(int numero)
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
