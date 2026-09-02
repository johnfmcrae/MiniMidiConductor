# MiniMidiConductor

Raspberry Pi-hosted USB MIDI controller for recording and playing back MIDI files.

## Version 1

- MIDI over USB
- Record MIDI input
- Playback MIDI
    - Loop
    - Single play
- MIDI transport control
    - Start
    - Stop
    - Track location
- MIDI channel configuration, accept multiple inputs

# Building

Run the following commands at the project root

```bash
cmake --build build
./build/minimidi
```