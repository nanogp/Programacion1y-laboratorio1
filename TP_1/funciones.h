#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief muestra el menu de opciones para que el usuario elija una
 *
 * \param primerNumeroYaSeIngreso: indica si el usuario ya ingreso su primer numero
 * \param segundoNumeroYaSeIngreso: indica si el usuario ya ingreso su segundo numero
 * \return el numero de opcion de menu elegido
 *
 */
int mostrarMenuDeOpciones(char, char, float, float);

/** \brief devuelve un numero validado
 *
 * \param numero: el numero a validar
 * \param minimo: limite inferior del rango
 * \param maximo: limite superior del rango
 * \param mensajeReingreso: mensaje para pedir reingreso si corresponde
 * \return el numero validado
 *
 */
float validarNumero(float, float, float, char[]);

/** \brief pide y devuelve un numero validado
 *
 * \param minimo: limite inferior del rango
 * \param maximo: limite superior del rango
 * \param mensajeIngreso: mensaje para pedir ingreso del numero
 * \param mensajeReingreso: mensaje para pedir reingreso si corresponde
 * \return el numero validado
 *
 */
float pedirNumero(float, float, char[], char[]);

/** \brief suma dos numeros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la suma de los operandos
 *
 */
float sumarFlotantes(float, float);


/** \brief resta dos numeros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la resta de los operandos
 *
 */
float restarFlotantes(float, float);


/** \brief multiplica dos numeros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return el producto de los operandos
 *
 */
float multiplicarFlotantes(float, float);


/** \brief divide dos numeros y devuelve el resultado en flotante
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la division de los operandos
 *
 */
float dividirFlotantes(float, float);


/** \brief calcula el factorial de un numero entero
 *
 * \param numero: el numero al que se calcula su factorial
 * \return el factorial del numero ingresado
 *
 */
double calcularFactorialEntero(int);


/** \brief muestra por printf el resultado de las operaciones de la calculadora
 *
 * \param nombreOperacion: la operacion de la que se va a mostrar el resultado (ej: suma, resta)
 * \param numero1: el primer numero que formo parte de la operacion
 * \param numero2: el segundo numero que formo parte de la operacion
 * \param resultado: el resultado que dio la operacion entre los numeros 1 y 2
 * \param decimales: la cantidad de decimales a mostrar
 *
 */
void mostrarResultado(char[], float, float, float, float);

#endif // FUNCIONES_H_INCLUDED
