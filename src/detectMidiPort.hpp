#pragma once
#include <libremidi/libremidi.hpp>
#include <iostream>
#include <optional>

void detectDefaultPort()
{
    // check for midi device
    if (auto port = libremidi::midi1::out_default_port())
    {
        std::cout << "Found a default MIDI output port\n\n";
        std::cout << "-- Device info --\n";
        std::cout << "Manufacturer  : " << port->manufacturer << std::endl;
        std::cout << "Product       : " << port->product << std::endl;
        std::cout << "Serial        : " << port->serial << std::endl;
        std::cout << "Device name   : " << port->device_name << std::endl;
        std::cout << "Port name     : " << port->port_name << std::endl;
        std::cout << "Display name  : " << port->display_name << std::endl
                  << std::endl;
    }
    else
    {
        std::cout << "No default MIDI output port found\n";
    }
}

std::optional<libremidi::output_port> getDefaultOutputMidiPort()
{
    auto port = libremidi::midi1::out_default_port();
    if (!port)
        std::cout << "No default MIDI output port found\n";
    return port;
}