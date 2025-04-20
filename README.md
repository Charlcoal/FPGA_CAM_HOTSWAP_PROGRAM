# FPGA_CAM_HOTSWAP_PROGRAM
Instruction/Log of programming the ATTiny4 microcontroller on hotswap boards used in 6.205

## Tools - ATTiny10IDE
wholder's [ATTiny10IDE] (on github) was used to program the boards.
I recommend using the .jar file, executing it with Java, and using an arduino. The instructions on 
the github page should be sufficient to get it working. **Please note that the relative locations of 
the pins on the ATTiny4 microcontroller are NOT the same as the breakout connector on the hotswap 
board**; please refer to the labels printed next to the connector when wiring to an arduino.

## Code
The code used on the hotswap board is included in this repository, but it could easily be re-made by
tweaking code provided under examples in [ATTiny10IDE]'s repository. All it does is set B0 low after
1 second elapses, but given the time it takes for the microcontroller to start up, it could probably
just set B0 low without waiting.

[ATTiny10IDE]: https://github.com/wholder/ATTiny10IDE
