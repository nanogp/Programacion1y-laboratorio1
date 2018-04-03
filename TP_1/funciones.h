#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief devuelve un entero validado
 *
 * \param numero: el numero a validar
 * \param minimo: limite inferior del rango
 * \param maximo: limite superior del rango
 * \param mensajeReingreso: mensaje para pedir reingreso de un entero si corresponde
 * \return entero validado
 *
 */
int validarEntero(int, int, int, char[]);

/** \brief pide y devuelve un entero validado
 *
 * \param minimo: limite inferior del rango
 * \param maximo: limite superior del rango
 * \param mensajeIngreso: mensaje para pedir ingreso del numero entero
 * \param mensajeReingreso: mensaje para pedir reingreso
 * \return entero validado
 *
 */
int pedirEntero(int, int, char[], char[]);

/** \brief suma dos numeros enteros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la suma de los operandos
 *
 */
int sumarEnteros(int, int);


/** \brief resta dos numeros enteros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la resta de los operandos
 *
 */
int restarEnteros(int, int);


/** \brief multiplica dos numeros enteros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return el producto de los operandos
 *
 */
int multiplicarEnteros(int, int);


/** \brief divide dos numeros enteros y devuelve el resultado en flotante
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la division de los operandos
 *
 */
float dividirEnteros(int, int);


/** \brief calcula el factorial de un numero entero
 *
 * \param numero: el numero al que se calcula su factorial
 * \return el factorial del numero ingresado
 *
 */
int calcularFactorial(int);


/** \brief muestra por printf el resultado de las operaciones de la calculadora
 *
 * \param nombreOperacion: la operacion de la que se va a mostrar el resultado (ej: suma, resta)
 * \param numero1: el primer numero que formo parte de la operacion
 * \param numero2: el segundo numero que formo parte de la operacion
 * \param resultado: el resultado que dio la operacion entre los numeros 1 y 2
 * \param decimales: la cantidad de decimales a mostrar
 *
 */
void mostrarResultado(char[], int, int, float, int);

#endif // FUNCIONES_H_INCLUDED
