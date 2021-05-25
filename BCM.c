/** @file BCM.c
 *  @brief Script para subir y bajar un Pin de la tarjeta RaspberryPi en lenguaje C con libreria BCM.

*   @version 1.0
*   @date 05/03/2021
*   @author Fredy Cuellar 
*   @author Marco Loaiza
*   
*  @example Compilación Para compilar el script segun la libreria, utilice el siguiente comando: \n
*  gcc -o bcm BCM.c -lbcm2835 \n
   gcc -o wiringpi wiringPi.c -l wiringPi \n
   
   
*  @example Pruebas Para realizar pruebas con el led por favor descomente las lineas de delay en C o time.sleep en python.
* 
 */

  #include <bcm2835.h>
  #include <stdio.h>


  #define LED RPI_GPIO_P1_11   /** Se define la variable LED como el pin 11 de la tarjeta. */
  #define Delay 500            /** Se define la variable Delay asignando el tiempo en milisegundos. */

/// Funcion principal
  int main(void)
  {
    if (!bcm2835_init()) /**bcm2835_init() Inicializa la libreria de BCM */
    return 1;

    bcm2835_gpio_fsel(LED,BCM2835_GPIO_FSEL_OUTP); /** bcm2835_gpio_fsel(Pin, Mode) Selecciona el modo de operacion del Pin  */

    while (1)
    {
        bcm2835_gpio_write(LED, HIGH);  /** bcm2835_gpio_write(Pin, on) Escribe el nivel de voltaje en el pin de salida on=HIGH  3.3v / on=LOW 0V   */
       // bcm2835_delay(Delay);          /** bcm2835_delay(msec) Permite que se suspenda la ejecución del programa por un tiempo determinado en milisegundos.  */
        bcm2835_gpio_write(LED, LOW);   
        //bcm2835_delay(Delay);          
    }
    bcm2835_close(); /**bcm2835_close() Cierra la libreria de BCM */
    return 0;
  }