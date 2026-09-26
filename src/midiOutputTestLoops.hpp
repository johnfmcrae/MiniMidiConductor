#include <libremidi/libremidi.hpp>
#include <iostream>
#include "detectMidiPort.hpp"

void playSingleNoteLoopOnDefaultPort() {
    int port = getDefaultMidiPort();
    
    if (port < 0)
        return;

    for (auto i = 0; i < 8; i++) {
        midiout.send_message(144, 64, 90);
        std::this_thread::sleep_for(500ms);
        midiout.send_message(128, 64, 40);
        std::this_thread::sleep_for(500ms);
    } 
}