#include <libremidi/libremidi.hpp>
#include "mainMenu.hpp"
#include <iostream>

int main() {

    // main menu
    mainMenu();

    // check for midi device
    if (auto port = libremidi::midi1::out_default_port()) {
	std::cout << "Found a default MIDI output port\n";
    } else {
	std::cout << "No default MIDI output port found\n";
    return 0;
    }

    // single note loop
    // for (auto i = 0; i < 8; i++) {
    //     midiout.send_message(144, 64, 90);
    //     std::this_thread::sleep_for(500ms);
    //     midiout.send_message(128, 64, 40);
    //     std::this_thread::sleep_for(500ms);
    // } 

    return 0;
}
