#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief muestra el menú de opciones para que el usuario elija una
 *
 * \param primerNumeroYaSeIngreso: indica si el usuario ya ingresó su primer número
 * \param segundoNumeroYaSeIngreso: indica si el usuario ya ingresó su segundo número
 * \return el número de opcion de menú elegido
 *
 */
int mostrarMenuDeOpciones(char, char, float, float, int);


/** \brief recibe un número y chequea si tiene decimales
 *
 * \param el número a verificar
 * \return 1 si tiene decimales, 0 si no
 *
 */
int chequearSiTieneDecimalesFloat(float);


/** \brief recibe el valor del divisor y verifica que no sea cero
 *
 * \param divisor: el número divisor
 * \return devuelve 1 o 0 si es posible dividir o no y en caso de no ser posible, lo informa en pantalla.
 *
 */
int validarDivisionEsPosible(float);


/** \brief recibe un número y verifica que se pueda realizar el factorial
 *
 * \param numero: el número a procesar
 * \return devuelve 1 o 0 si es posible realizar o no el factorial y en caso de no ser posible, lo informa en pantalla.
 *
 */
int validarFactorialEsPosible(float);


/** \brief muestra por printf el resultado de las operaciónes de la calculadora
 *
 * \param nombreOperacion: la operación de la que se va a mostrar el resultado (ej: suma, resta)
 * \param numero1: el primer número que formo parte de la operación
 * \param numero2: el segundo número que formo parte de la operación
 * \param resultado: el resultado que dio la operación entre los números 1 y 2
 * \param cantidadDecimales: la cantidad de decimales a mostrar
 * \param limpiarPantalla: recibe S o N si debe borrar la pantalla antes de mostrar el resultado
 * \param hacerPausa: recibe S o N si debe hacer una pausa luego de mostrar el resultado
 *
 */
void mostrarResultado(char[], float, float, float, int, char, char);


/** \brief devuelve un número validado
 *
 * \param número: el número a validar
 * \param minimo: límite inferior del rango
 * \param maximo: límite superior del rango
 * \param mensajeReingresó: mensaje para pedir reingresó si corresponde
 * \return el número validado
 *
 */
float validarFloat(float, float, float, char[]);


/** \brief pide y devuelve un número validado
 *
 * \param minimo: límite inferior del rango
 * \param maximo: límite superior del rango
 * \param mensajeIngreso: mensaje para pedir ingresó del número
 * \param mensajeReingresó: mensaje para pedir reingresó si corresponde
 * \return el número validado
 *
 */
float pedirFloat(float, float, char[], char[]);


/** \brief suma dos números y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la suma de los operandos
 *
 */
float sumarFloat(float, float);


/** \brief resta dos números y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la resta de los operandos
 *
 */
float restarFloat(float, float);


/** \brief multiplica dos números y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return el producto de los operandos
 *
 */
float multiplicarFloat(float, float);


/** \brief divide dos números y devuelve el resultado en flotante
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la division de los operandos
 *
 */
float dividirFloat(float, float);


/** \brief calcula el factorial de un número entero
 *
 * \param numero: el número al que se calcula su factorial
 * \return el factorial del número ingresado
 *
 */
float calcularFactorialInt(int);


#endif // FUNCIONES_H_INCLUDED
