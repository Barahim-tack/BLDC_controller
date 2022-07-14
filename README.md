# BLDC_controller
How to control brushless motor via Arduino  

There are two types of brushless motor, which are 1. sensored and 2. sensorless 

The type used in this repository is sensorless with only three wires. The sensorless BLDC has three phases to be controlled via triple bridge circuit. ESC is used to control the speed of the motor by PWM signal coming out of Arduino board using Servo library. 

In case of bidirectional ESC, the BLDC can be moved CW and CCW based on the PWM signal that after a signal of 1.5 millisecond the motor will be reversed. 
