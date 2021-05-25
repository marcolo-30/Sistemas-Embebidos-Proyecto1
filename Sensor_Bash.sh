 #! /bin/bash
    
    #El script captura la informacion del sensor
    #transforma el valor de tempertura 
    #y guarda los valores junto a la fecha cada 10 segundos.
    
    
    echo "Ejecutando el script .... para finalizar presione Ctrl + c "
    
    while true
    do
     a=$(date +%Y%m%d' '%H%M%S)                                # la variable a guarda la informacion del dia y la hora 
     b=$(cat /sys/bus/w1/devices/28-2130fc000900/temperature)  # la variable b guarda la informacion entregada por el sensor
     c=$(echo $((b/1000))'.'$((b%100)) '°C' )                  # la variable c guarda la transformacion de el valor capturado del sensor a °Centigrados
    
    echo $a';'$c >> $(date +%Y%m%d)_TEMPERATURA.csv            # Se adjunta la informacion al archivo .csv
    sleep 9.1                                                  # tiempo de espera para cumplir con la tasa de muestra cada 10 segundos.
    
    done