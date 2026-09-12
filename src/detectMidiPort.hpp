#include <libremidi/libremidi.hpp>
#include <iostream>

void detectDefaultPort() {
        // check for midi device
    if (auto port = libremidi::midi1::out_default_port()) {
	std::cout << "Found a default MIDI output port\n";
    } else {
	std::cout << "No default MIDI output port found\n";
    }
}