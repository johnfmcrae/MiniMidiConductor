#pragma once
#include <libremidi/libremidi.hpp>
#include "detectMidiPort.hpp"
#include <chrono>
#include <iostream>
#include <optional>
#include <thread>

void playSingleNoteLoopOnDefaultPort()
{
    auto port = getDefaultOutputMidiPort();
    if (!port)
        return;
    std::cout << "Sending MIDI messages on:\n";
    std::cout << "  Display name: " << port->display_name << std::endl;
    std::cout << "  Port name:    " << port->port_name << std::endl;

    libremidi::midi_out out;
    out.open_port(*port);
    if (!out.is_port_open())
    {
        std::cerr << "Failed to open port\n";
        return;
    }

    for (auto i = 0; i < 8; i++)
    {
        // Note on: channel 1, middle C (60), velocity 100
        out.send_message(0x90, 60, 100);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        // Note off
        out.send_message(0x80, 60, 0);
    }
}