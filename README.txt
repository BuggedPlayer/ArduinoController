Standalone full plug&play Arduino Mega MIDI controller with midi over usb made by Teta

How to:

1 - Install Java Runtime Environment v. 8 https://www.java.com/it/download/manual.jsp
2 - Install Flip Installer (Installer inside)
3 - Connect arduino to the pc and upload the Controller.ino sketch 
4 - on ICSP pin make the Arduino mega run in programmer mode to change the stock firmware (You can notice in device manager it will disappear as arduino)
5 - Run Flip, select Atmega16U2 (the serial controller off the board) then click the load hex file option and upload the new firmware
6 - The controller is done, now you can easy connect arduino to the pc and every daw will recognize it as a midi interface


If you need to run back at the normal arduino firmware make the opposite process so :

1 - on ICSP make Arduino run in programmer mode
2 - Open Flip and upload back the stock Arduino firmware
3 - Remember everytime you do this you have to unplug the board and plug it again


The sketch is editable and you can edit as much as you want defining new digital or analogue inputs.
For standard i just put 4 potentiometers into A0, A1, A2, A3

i was wondering to buy some multiplexers to increase the number of analog inputs for arduino mega from 16 to 64


