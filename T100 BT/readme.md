# T100 BT

This is the first Arduino controlled robot build at the American International School Vietnam. It was finished in September 2018. Following this instructions you can build one yourself.

## Materials

All materials were ordered at idcayroi.com. Here is a list with the costs:

1. Arduino Uno
2. Xe robot
3. Motor shield
4. Bluetooth module
5. Battery holder 2x 18650
6. Two batteries 18650
7. Jumper wires

## Build

It is best to first solder the wires to the two yellow geared motors. Then assemble the robot with the two motors and the 360 spinning wheel. Fix the Arduino and the battery holder to the frame. Solder the wires to the switch.

Before installing the motor shield add tree pins to it. Namely solder pins in at pin 2, VCC and GND. They will be needed for the bluetooth module.

## Software

The Arduino is programmed by the Arduino IDE. Make sure it is installed on your computer and up to date.

This robot needs an additional library to work. You can download the required file here: [AFMotor.zip](AFMotor.zip).

### November 2018
Next you can download the very program (T100.ino) and install on your Arduino.

### November 2019
There is some software for BLE for both iOS and Android. Therefore download (../T100ble.ino) and install on your Arduino.

## Control your robot with your smartphone 

### November 2018
This initial release works only with Bluetooth 2.0 and is therefore not supported by an iOS devide. Download the following software for your Android Smartphone:

- List would be depreceated anyways.

### November 2019
Use
