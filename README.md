# BLDC_controller
How to control brushless motor via Arduino  

There are two types of brushless motor, which are 1. sensored and 2. sensorless 

The type used in this repository is sensorless with only three wires. The sensorless BLDC has three phases to be controlled via triple bridge circuit. ESC is used to control the speed of the motor by PWM signal coming out of Arduino board using Servo library. 

In case of bidirectional ESC, the BLDC can be moved CW and CCW based on the PWM signal that after a signal of 1.5 millisecond the motor will be reversed. 

Algorithm of BLDC controller design: 

1. Select the type of BLDC motor (sensored|sensorless, rpm/V, inrunner|outrunner) 
2. Choose the suitable ESC based on the current capacity and whether will be bidirectional moveoment or not. 
3. Choose the suitable battery (voltage, current capacity) 
4. Choose the type of input control such as potentiometer in this repository. 
5. Connect the components based on the circuit diagram provided in this repository. 
6. Upload the code to Arduino board provided in this repository. 
