#pragma once
#include <libremidi/libremidi.hpp>
#include "detectMidiPort.hpp"
#include <iostream>
#include <string>

libremidi::midi_in setUpMidiIn()
{
    auto infoCallback = [](const libremidi::message &message)
    {
        std::cout << "Channel: " << std::to_string(message.get_channel()) << std::endl;
        std::cout << "Message size: " << std::to_string(message.size()) << std::endl;
        std::cout << "Bytes: "; 
        for (auto byte : message)
            std::cout << "[" << std::to_string(byte) << "]";
        std::cout << std::endl;
    };

    libremidi::midi_in midi{
        libremidi::input_configuration{.on_message = infoCallback}};
    return midi;
}

void monitorMidiOnDefaultPort()
{
    auto midiIn = setUpMidiIn();
    if (auto port = libremidi::midi1::in_default_port())
        midiIn.open_port(*port);

    std::cout << "Listening for MIDI messages. Enter anything to exit\n";
    std::string userInput;
    std::cin >> userInput;
}