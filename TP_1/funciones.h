#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief muestra el men� de opciones para que el usuario elija una
 *
 * \param primerNumeroYaSeIngreso: indica si el usuario ya ingres� su primer n�mero
 * \param segundoNumeroYaSeIngreso: indica si el usuario ya ingres� su segundo n�mero
 * \return el n�mero de opcion de men� elegido
 *
 */
int mostrarMenuDeOpciones(char, char, float, float, int);


/** \brief recibe un n�mero y chequea si tiene decimales
 *
 * \param el n�mero a verificar
 * \return 1 si tiene decimales, 0 si no
 *
 */
int chequearSiTieneDecimalesFloat(float);


/** \brief recibe el valor del divisor y verifica que no sea cero
 *
 * \param divisor: el n�mero divisor
 * \return devuelve 1 o 0 si es posible dividir o no y en caso de no ser posible, lo informa en pantalla.
 *
 */
int validarDivisionEsPosible(float);


/** \brief recibe un n�mero y verifica que se pueda realizar el factorial
 *
 * \param numero: el n�mero a procesar
 * \return devuelve 1 o 0 si es posible realizar o no el factorial y en caso de no ser posible, lo informa en pantalla.
 *
 */
int validarFactorialEsPosible(float);


/** \brief muestra por printf el resultado de las operaci�nes de la calculadora
 *
 * \param nombreOperacion: la operaci�n de la que se va a mostrar el resultado (ej: suma, resta)
 * \param numero1: el primer n�mero que formo parte de la operaci�n
 * \param numero2: el segundo n�mero que formo parte de la operaci�n
 * \param resultado: el resultado que dio la operaci�n entre los n�meros 1 y 2
 * \param cantidadDecimales: la cantidad de decimales a mostrar
 * \param limpiarPantalla: recibe S o N si debe borrar la pantalla antes de mostrar el resultado
 * \param hacerPausa: recibe S o N si debe hacer una pausa luego de mostrar el resultado
 *
 */
void mostrarResultado(char[], float, float, float, int, char, char);


/** \brief devuelve un n�mero validado
 *
 * \param n�mero: el n�mero a validar
 * \param minimo: l�mite inferior del rango
 * \param maximo: l�mite superior del rango
 * \param mensajeReingres�: mensaje para pedir reingres� si corresponde
 * \return el n�mero validado
 *
 */
float validarFloat(float, float, float, char[]);


/** \brief pide y devuelve un n�mero validado
 *
 * \param minimo: l�mite inferior del rango
 * \param maximo: l�mite superior del rango
 * \param mensajeIngreso: mensaje para pedir ingres� del n�mero
 * \param mensajeReingres�: mensaje para pedir reingres� si corresponde
 * \return el n�mero validado
 *
 */
float pedirFloat(float, float, char[], char[]);


/** \brief suma dos n�meros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la suma de los operandos
 *
 */
float sumarFloat(float, float);


/** \brief resta dos n�meros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la resta de los operandos
 *
 */
float restarFloat(float, float);


/** \brief multiplica dos n�meros y devuelve el resultado
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return el producto de los operandos
 *
 */
float multiplicarFloat(float, float);


/** \brief divide dos n�meros y devuelve el resultado en flotante
 *
 * \param numero1: el primer operando
 * \param numero2: el segundo operando
 * \return la division de los operandos
 *
 */
float dividirFloat(float, float);


/** \brief calcula el factorial de un n�mero entero
 *
 * \param numero: el n�mero al que se calcula su factorial
 * \return el factorial del n�mero ingresado
 *
 */
float calcularFactorialInt(int);


#endif // FUNCIONES_H_INCLUDED
