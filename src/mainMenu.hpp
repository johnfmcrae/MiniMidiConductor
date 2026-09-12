#include <iostream>
#include <string>

#include "detectMidiPort.hpp"

using namespace std;

void mainMenu()
{
    cout << "-- Main Menu --\n";
    cout << "1. Check for MIDI device\n";
    cout << "2. Play single note loop\n";
    cout << "3. Play sequence loop\n";
    cout << "4. Show MIDI input\n";
    cout << endl;
    cout << "[x] exit\n";
    cout << endl;
    string userInput;
    cin >> userInput;
    cout << endl;

    if (userInput == "x" || userInput == "X")
        return;

    try
    {
        const int userInputInt{stoi(userInput)};
        switch (userInputInt)
        {
        case 1:
            detectDefaultPort();
        }
    }
    catch (std::invalid_argument const &ex)
    {
        std::cout << "Invalid input\n";
    }
}