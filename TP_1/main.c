#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroEntero1 = 0;
    int numeroEntero2 = 0;
    float resultado;
    int decimalesEntero = 0;
    int decimalesFlotante = 2;

    while(seguir=='s')
    {

        system("cls");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Elegir una de las opciones: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                numeroEntero1 = pedirEntero(1, 10, "Ingrese un numero entero", "Reingrese un numero entero.");
                break;
            case 2:
                numeroEntero2 = pedirEntero(1, 10, "Ingrese un numero entero", "Reingrese un numero entero.");
                break;
            case 3:
                resultado = sumarEnteros(numeroEntero1, numeroEntero2);
                mostrarResultado("suma", numeroEntero1, numeroEntero2, resultado, decimalesEntero);
                break;
            case 4:
                resultado = restarEnteros(numeroEntero1, numeroEntero2);
                mostrarResultado("resta", numeroEntero1, numeroEntero2, resultado, decimalesEntero);
                break;
            case 5:
                resultado = dividirEnteros(numeroEntero1, numeroEntero2);
                mostrarResultado("division", numeroEntero1, numeroEntero2, resultado, decimalesFlotante);
                break;
            case 6:
                resultado = multiplicarEnteros(numeroEntero1, numeroEntero2);
                mostrarResultado("multiplicacion", numeroEntero1, numeroEntero2, resultado, decimalesEntero);
                break;
            case 7:
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
