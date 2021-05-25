 #! /bin/bash

    # Script para subir y bajar un pin. 
    # para la demostracion descomente los sleep y conecte la salida a un led.
    
    gpio mode 0 out  #Configura el pin 0 en modo de salida. 
    
    echo "Ejecutando el script  .... para detener presione Ctrl + c"
    
    while true
    do
     gpio write 0 1  # Escribe el nivel de voltaje de salida 1-> 3.3v / 0 -> 0V
     sleep 1         # Permite que se suspenda la ejecución del programa por un tiempo determinado en segundos.
     gpio write 0 0  
     sleep 1        
    done
    