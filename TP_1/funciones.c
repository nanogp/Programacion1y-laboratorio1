#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/** \brief devuelve un entero validado
 *
 * \param numero: el numero a validar
 * \param minimo: limite inferior del rango
 * \param maximo: limite superior del rango
 * \param mensajeReingreso: mensaje para pedir reingreso de un entero si corresponde
 * \return entero validado
 *
 */
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

/** \brief pide y devuelve un entero validado
 *
 * \param minimo: limite inferior del rango
 * \param maximo: limite superior del rango
 * \param mensajeIngreso: mensaje para pedir ingreso del numero entero
 * \param mensajeReingreso: mensaje para pedir reingreso
 * \return entero validado
 *
 */
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

/** \brief suma dos numeros enteros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la suma de los operandos
 *
 */
int sumarEnteros(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 + numero2;

    return resultado;
};

/** \brief resta dos numeros enteros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la resta de los operandos
 *
 */
int restarEnteros(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 - numero2;

    return resultado;
};

/** \brief multiplica dos numeros enteros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return el producto de los operandos
 *
 */
int multiplicarEnteros(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 * numero2;

    return resultado;
};

/** \brief divide dos numeros enteros y devuelve el resultado en flotante
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la division de los operandos
 *
 */
float dividirEnteros(int numero1, int numero2)
{
    float resultado;

    resultado = (float)numero1 / numero2;

    return resultado;
};

/** \brief muestra por printf el resultado de las operaciones de la calculadora
 *
 * \param nombreOperacion: la operacion de la que se va a mostrar el resultado (ej: suma, resta)
 * \param numero1: el primer numero que formo parte de la operacion
 * \param numero2: el segundo numero que formo parte de la operacion
 * \param resultado: el resultado que dio la operacion entre los numeros 1 y 2
 * \param decimales: la cantidad de decimales a mostrar
 *
 */
void mostrarResultado(char nombreOperacion[], int numero1, int numero2, float resultado, int decimales)
{
    system("cls");
    printf("\nEl resultado de la %s entre %d y %d es: %.*f\n", nombreOperacion, numero1, numero2, decimales, resultado);
    system("pause");
};
