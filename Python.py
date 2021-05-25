#! /bin/python3 

"""@file Python.py
@brief Script para subir y bajar un Pin de la tarjeta RaspberryPi en lenguaje Python con libreria RPi.GPIO.
@version 1.0
@date 05/03/2021
@author Fredy Cuellar 
@author Marco Loaiza
___________________________________________________________________________________________________________________________________________________________________________
Libraries:

import RPi.GPIO as gpio  se importa la libreria y se puede referir en el codigo solo con "gpio" 
import time              se importa la libreria tiempo para la ejecucion de los time.sleep()
___________________________________________________________________________________________________________________________________________________________________________
Functions:

gpio.setmode()              Función para enumerar los pines de la Raspberry con la libreria 
                            PARAMETROS : GPIO.BOARD, GPIO.BCM o None  De acuerdo con la configuracion de pines seleccionada observar https://es.pinout.xyz/pinout
                            Ejemplo :  gpio.setmode(GPIO.BOARD)

gpio.setup(Pin,Modo)        Configuracion de pines 
                            PARAMETROS : Pin (número de pin seleccionado)
                                         Modo (GPIO.OUT salida / GPIO.IN entrada) por defecto todos los pines estan configurados como In
                            Ejemplo : gpio.setup(11,GPIO.OUT) configura el pin 11 en modo salida

gpio.output(pin,estado)     Configura el estado de salida de un pin GPIO
                            PARAMETROS: Pin (indica el número de pin seleccionado)
                                        Estado (Existen dos estados 0/GPIO.LOW/False  o  1/GPIO.HIGH/True)
                            Ejemplo: gpio.output(11,1) Configura el la salida del pin en alto. 


time.sleep(sec)             Función que permite pausar la ejecución del programa por un tiempo definido en segundos  
                            PARAMETROS: sec tiempo en segundos
                            Ejemplo : time.sleep(2) suspende / detiene el programa por dos segundos

_____________________________________________________________________________________________________________________________________________________________________________
   
"""
 

import RPi.GPIO as gpio
import time

gpio.setmode(gpio.BOARD) 
gpio.setup(11, gpio.OUT)

print(" Ejecutando el script para finalizar presione Ctrl + c")

while True:
    gpio.output(11, True)
    time.sleep(0.5)

    gpio.output(11, False)
    time.sleep(0.5)