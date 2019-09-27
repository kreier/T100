## T100 controlled with wireless PS2 controller

The PS2 controllers are quite cheap nowadays and the PS2X library for Arduino let's use the analog inputs from this controller easily.

### Combination with motorshield or L298N

Pins 10 to 13 are designed for the motorshield. 12 and 13 activate M1 and M2 while 10 and 11 provide an analog voltage for different speeds by PWM (480 Hz).

Assignment of pins:

| PS2         | PS2 Pin |  old |  new |
|-------------|:-------:|:----:|:----:|
| Data        |    1    |  12  |   9  |
| Command     |    2    |  11  |   8  |
|             |    3    |      |      |
| Ground      |    4    |  GND |  GND |
| Power       |    5    | 3.3V | 3.3V |
| Attention   |    6    |  10  |   7  |
| Clock       |    7    |  13  |   6  |
|             |    8    |      |      |
| Acknowledge |    9    |      |      |
