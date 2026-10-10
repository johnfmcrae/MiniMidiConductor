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

## Building

Set up the build with

```bash
cmake -B build
```

Then, run the following commands at the project root

```bash
cmake --build build
./build/minimidi
```

## Project Set Up

To edit and debug in VS Code, first run

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug
```

This will make the commands list at `build/compile_commands.json`. To add this to the C++ configuration properties, add the following to your local `.vscode` folder:

```json
{
    "configurations": [
    {
        "name": "Mac",
        "compileCommands": "${workspaceFolder}/build/compile_commands.json",
        "cppStandard": "c++20",
        "intelliSenseMode": "macos-clang-x64"
    }
    ],
    "version": 4
}
```
