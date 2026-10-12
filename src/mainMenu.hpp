#include <iostream>
#include <string>

#include "detectMidiPort.hpp"
#include "midiOutputTestLoops.hpp"
#include "midiMonitor.hpp"

using namespace std;

void menuText();

void mainMenu()
{
    string userInput;

    while (!(userInput == "x" || userInput == "X"))
    {
        menuText();
        cin >> userInput;
        cout << endl;
        try
        {
            const int userInputInt{stoi(userInput)};
            switch (userInputInt)
            {
            case 1:
                detectDefaultPort();
                break;
            case 2:
                playSingleNoteLoopOnDefaultPort();
                break;
            case 3:
                break;
            case 4:
                monitorMidiOnDefaultPort();
                break;
            }
        }
        catch (std::invalid_argument const &ex)
        {
            std::cout << "Invalid input\n";
        }
    }
}

void menuText()
{
    cout << "-- Main Menu --\n";
    cout << "1. Check for MIDI device\n";
    cout << "2. Play single note loop\n";
    cout << "3. Play sequence loop\n";
    cout << "4. Show MIDI input\n";
    cout << endl;
    cout << "[x] exit\n";
    cout << endl;
}