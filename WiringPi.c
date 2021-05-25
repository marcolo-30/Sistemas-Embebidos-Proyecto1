/** @file WiringPi.c
 *  @brief Script para subir y bajar un Pin de la tarjeta RaspberryPi en lenguaje C con libreria WiringPi.
*
*   @version 1.0
*   @date 05/03/2021
*   @author Fredy Cuellar 
*   @author Marco Loaiza
*    
 */ 

#include <wiringPi.h> 

/// Funcion principal

int main (void)
{
    wiringPiSetup();    /** wiringPiSetup() Inicializa la libreria de wiringPi*/
    pinMode(0, OUTPUT); /** pinMode (pin,Mode) Configura el pin seleccionado como Mode=INPUT entrada o Mode=OUTPUT salida.*/
    
    while (true){
        digitalWrite(0, HIGH); /** digitalWrite(pin,on) Escribe el nivel de voltaje en el pin de salida on=HIGH  3.3v / on=LOW 0V */
        delay(500);          /** delay(msec) Permite que se suspenda la ejecución del programa por un tiempo determinado en milisegundos.*/
        digitalWrite(0, LOW); 
        delay(500);
    }
    return 0 ;
}