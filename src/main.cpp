#include <libremidi/libremidi.hpp>
#include <iostream>

int main() {
    if (auto port = libremidi::midi1::out_default_port()) {
	std::cout << "Found a default MIDI output port\n";
    } else {
	std::cout << "No default MIDI output port found\n";
    }
    return 0;
}
