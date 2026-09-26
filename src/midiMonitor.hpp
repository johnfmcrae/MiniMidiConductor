#include <libremidi/libremidi.hpp>
#include <iostream>

libremidi : midi_in setUpMidiIn()
{
    auto my_callback = [](const libremidi::message &message)
    {
        // how many bytes
        message.size();
        // access to the individual bytes
        message[i];
        // access to the timestamp
        message.timestamp;
    };

    // Create the midi object
    libremidi::midi_in midi{
        libremidi::input_configuration{.on_message = my_callback}};
    return midi;
}

void monitorMidiOnDefaultPort()
{
    auto midiIn = setUpMidiIn();
    if (auto port = libremidi::midi1::in_default_port())
        midi.open_port(*port);
    cout << "Message received: " + midiIn.message[i];
}