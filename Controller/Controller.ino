

#include <MIDI_Controller.h> // Include the library

// Create a new instance of the class 'Analog', called 'potentiometer', on pin A0, 
// that sends MIDI messages with controller 7 (channel volume) on channel 1
Analog pot1(A0, MIDI_CC::Channel_Volume, 1);
Analog pot2(A1, MIDI_CC::Channel_Volume, 2);
Analog pot3(A2, MIDI_CC::Channel_Volume, 3);
Analog pot4(A3, MIDI_CC::Channel_Volume, 4);

void setup() {}

void loop() {
  // Refresh the MIDI controller (check whether the potentiometer's input has changed since last time, if so, send the new value over MIDI)
  MIDI_Controller.refresh();
}
