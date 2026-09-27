#pragma once
#include <libremidi/libremidi.hpp>
#include <iostream>
#include <optional>

void detectDefaultPort()
{
    // check for midi device
    if (auto port = libremidi::midi1::out_default_port())
    {
        std::cout << "Found a default MIDI output port\n";
    }
    else
    {
        std::cout << "No default MIDI output port found\n";
    }
}

std::optional<libremidi::output_port> getDefaultOutputMidiPort()
{
    auto port = libremidi::midi1::out_default_port();
    if(!port)
        std::cout << "No default MIDI output port found\n";
    return port;
}