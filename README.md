# HC-SR04 Ultrasonic Distance Sensor

## Introduction to the HC-SR04 Ultrasonic Distance Sensor for Arduino Uno

The HC-SR04 sensor is an ultrasonic distance sensor commonly used with Arduino Uno boards. It emits ultrasonic sound waves and measures the time it takes for the waves to bounce back, allowing you to calculate distances. It has a transmitter and a receiver and requires connections to VCC, GND, Trig, and Echo pins on the Arduino Uno.


## Circuit Setup: Using the HC-SR04 Sensor with Arduino Uno to Measure Distance

The circuit setup for using the HC-SR04 sensor with Arduino Uno to measure distance involves connecting the sensor and the Arduino board. The HC-SR04 sensor requires four connections: VCC (power supply), GND (ground), Trig (trigger), and Echo (echo). The VCC pin of the sensor is connected to the 5V pin on the Arduino Uno, the GND pin is connected to the GND pin on the Arduino, the Trig pin is connected to a digital output pin on the Arduino (e.g., pin 9), and the Echo pin is connected to a digital input pin on the Arduino (e.g., pin 10). This circuit setup allows the Arduino Uno to send trigger signals to the sensor and receive echo signals to calculate distances based on the time it takes for the ultrasonic waves to bounce back. With this setup, the Arduino Uno can accurately measure distances using the HC-SR04 sensor.

![Glorious Wolt-Jaagub](https://github.com/Zahrah794/HC-SR04/assets/139267881/67ca0929-8686-4088-a97d-071b0b6d526e)



## Circuit Setup: Integrating HC-SR04 Ultrasonic Sensor, LED, and Arduino Uno for Distance Measurement and LED Control

The circuit setup involves utilizing the HC-SR04 ultrasonic distance sensor, an LED, a resistor, and a breadboard in conjunction with an Arduino Uno. The HC-SR04 sensor is connected to the Arduino using four connections: VCC (power supply), GND (ground), Trig (trigger), and Echo (echo). The VCC pin of the sensor is connected to the 5V pin on the Arduino Uno, providing it with a stable power supply. The GND pin of the sensor is connected to the GND pin on the Arduino to establish a common ground. The Trig pin of the sensor is connected to a digital output pin on the Arduino, while the Echo pin is connected to a digital input pin. Additionally, an LED is connected to a digital output pin on the Arduino, with a current-limiting resistor placed in series to regulate the current flowing through the LED. The breadboard serves as a platform for organizing and connecting the components. When the Arduino measures the distance using the HC-SR04 sensor, if the distance reaches a specified point, it activates the LED by sending a signal through the corresponding digital output pin. The resistor ensures safe operation of the LED by controlling the current passing through it. The breadboard facilitates convenient arrangement and interconnection of the components, simplifying the circuit construction process.

![Bodacious Esboo](https://github.com/Zahrah794/HC-SR04/assets/139267881/580059e8-33b6-4325-8a59-18a1c06adac8)
