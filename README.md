# CHRISSI
Telegraph made using a Digistump Attiny85 Board

The Communications HUB & Reactive Instrument for Simply Sending Information, a backronym for CHRISSI, is a device based on the Attiny85 microcontroller (Digistump type board), featuring a mere five I/O pins, which allows serial communication (RX, TX and GND at 9600-8-N-1 baud), and display of the 26 letters of the alphabet + 1 space (27 symbols, all in all, or 3 times 3 times 3), essentially by offering a resistor-ladder-based keyboard and a blinkenlights display, whereby each letter is sent by pressing its corresponding button, transmitted over a serial line, and upon receipt it is expressed through three co-ordinates, X, Y and Z, given as consecutive blinks and expressing the character's position in a 3x3x3 grid (i.e. each co-ordinate is 1...3), describin in which of three squares a character may be found, in which of three lines, and in the given line, in which of three character positions.

The grid for receiving letters is arranged as follows:

ABC.JKL.STU

DEF.MNO.VWX

GHI.PQR.YZspace

So, for instance, blinking out 3-3-3 means "space", 1-1-1 means "A", 2-1-3 means "L", 1-3-1 means "G", 1-2-3 means "F", 3-2-1 means "V" and so on and so forth.

The ATTiny85 having five pins, and two being reserved for RX/TX, the question is how to hook up the keyboard and the "blinkenlights".

The prototype went for "1 pin keyboard resistor ladder, 2 pins blinkenlights" (blinking out co-ordinates as binary numbers, 01, 10 and 11). This proved unreliable, as during operation, resistor levels could change, causing wrong resistor ladder button press readings.

The final version utilised "2 pins keyboard, 1 pin blinkenlight(s)". Here, evidently, only one light can be controlled (both LEDs are hence connected to 1 pin). Regarding button press readings, this is a lot more reliable. As to displaying number, blinks are used: one long, continuous blink meaning "1"; four medium-brief blinks meaning "2"; and a flutter of nine, very brief blinks meaning "3". This is visually easy enough to identify and constitutes thus the solution.

The CHRISSI telegraph also contains an automatic transmission mode: if, during operation, three spaces are pressed consecutively, a special recording mode is entered, where text (up to 512 bytes) is saved into EEPROM. Typing three spaces again terminates the recording, and automatic transmission is initiated: the recoreded text is transmitted again and again, in a loop. To end the automatic transmission, the sender either has to reset his unit, or to press (and keep pressed) any key until the loop stops.

Schematics and photos are included.

Two video demonstrations, of the prototype and the final design, are presented on my YouTube channel:

https://www.youtube.com/@ninoivanov

Photos, schematics and Arduino sketches are attached; the analog input threshold values per key in each sketch will have to be updated with "real-world-values" of the actual resistor ladders constructed, as I noted there significant variations even in the same make and model of parts.


