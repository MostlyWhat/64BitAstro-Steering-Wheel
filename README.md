# 64BitAstro-Steering-Wheel (Version: Prototype 1)
Prototype Steering Wheel Designed to be used with F1 Games from Codemasters. But any other games should work fine through key-mapping. (Powered by Unojoy)

## Use in Arduino
### Firmware Installation
[Put Arduino in DFU Mode](https://www.arduino.cc/en/Hacking/DFUProgramming8U2)\
Execute TurnIntoAJoyStick.bat

### Firmware Updating
[Put Arduino in DFU Mode](https://www.arduino.cc/en/Hacking/DFUProgramming8U2)\
Execute TurnIntoArduino.bat\
Update the Arduino Code\
Follow Firmware Installation

## Connections (Not Finalised)
A0 = Steering Wheel Direction X (Left Analog Stick)\
A1 = Steering Wheel Direction Y (Left Analog Stick) Set to Neutral to Avoid Y Movements\
A2 = Steering Wheel Direction X (Right Analog Stick) Set to Neutral to Avoid X Movements\
A3 = Steering Wheel Direction Y (Right Analog Stick) Set to Neutral to Avoid Y Movements\
A4 = Brake (Left Trigger) Currently a Button but can be changed to potentiometer for Analog Data\
A5 = Throttle (Right Trigger) Currently a Button but can be changed to potentiometer for Analog Data

## Schematics (Not Finalised)
![Schematics](Schematic.png "Schematics")
