# Sistemas-Embebidos-Proyecto1
El proyecto pretende medir los tiempos de subida y bajada de un Pin de la RPI para comparar tiempos de respuesta entre diferentes lenguajes y librerías, ademas se realiza la conexión y configuración de un sensor de temperatura con el protocolo de comunicación 1-wire.

El proyecto cumple con dos objetivos, el primero es comparar la frecuencia de conmutación de un pin de GPIO de una tarjeta de desarrollo raspberry pi, al programar la activación o desactivación (subida / bajada) del pin en tres lenguajes de programación diferentes( C/C++, Python o Bash) y el segundo es el de utilizar periféricos externos de la tarjeta para medir mediante un sensor one wire la variable de medida del sensor y posteriormente guardar esta información en un archivo .csv cada determinado tiempo.\\

La conexión para el primer objetivo, para realizar la prueba se realiza el montaje con un led, teniendo en cuenta que la tarjeta raspberry Pi 2 Model B V1.1:
                        
![Montajeled](https://user-images.githubusercontent.com/80786325/111538703-01537900-873b-11eb-9fce-9075bfeef7d4.PNG)

La conexión del sensor ds18b20,en la tarjeta raspberry Pi 2 Model B V1.1, es el siguiente:

![ConexionSensor (1)](https://user-images.githubusercontent.com/80786325/111538879-39f35280-873b-11eb-8fee-31c0a53a4f96.PNG)

A continuación, se indica la programación implementada para el primer objetivo:

| Lenguaje      | Programa |
| ------------- | ------------- |
| C/C++, libreria Wiring Pi  | [Wiringpi](https://github.com/Fredycuellar/Proyecto1_Sistemas_Embebidos/blob/94931f9a6c48a0345d5b23ea3d00ba4b70d7f1ef/WiringPi) |
| C/C++, libreria BCM |[BCM](https://github.com/Fredycuellar/Proyecto1_Sistemas_Embebidos/blob/17cf8d916295f7ada7c51e401e840512e4fff93e/BCM_) |
| Python | [Python](https://github.com/Fredycuellar/Proyecto1_Sistemas_Embebidos/blob/5f52e727b520e943d16d735efebd35be09166315/Python)  |
|bash | [Bash](https://github.com/Fredycuellar/Proyecto1_Sistemas_Embebidos/blob/d43c243f8bea0d57bbbf3a5e0e3c35a0b7ee1acd/Bash) |

**Para ejecutar el código de C en consola se realiza lo siguiente:**

gcc -o led gpio_led.c -l wiringPi
./led

**Para ejecutar los códigos de Python en consola se realiza lo siguiente:**

python3 ./led.py

**Para ejecutar los códigos de bash en consola se realiza lo siguiente:**

bash ./led.sh

A continuación, se indica la programación implementada para el segundo objetivo:

| Lenguaje      | Programa |
| ------------- | ------------- |
|Bash  | [Aplicación Sensor en Bash](https://github.com/Fredycuellar/Proyecto1_Sistemas_Embebidos/blob/a044cc04f32c177029d4b6a671705c3089545bdf/Sensor_Bash) |
|Informe  | [Proyecto1.pdf](https://github.com/marcolo-30/Sistemas-Embebidos-Proyecto1/blob/main/Proyecto_Sistemas_Embebidos.pdf) |

**Para ejecutar el código de C en consola se realiza lo siguiente:**
bash ./sensor.sh
