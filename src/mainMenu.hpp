#include <iostream>
using namespace std;

void mainMenu() {
    cout << "-- Main Menu --\n";
    cout << "1. Check for MIDI device\n";
    cout << "2. Play single note loop\n";
    cout << "3. Play sequence loop\n";
    cout << "4. Show MIDI input\n";
    cout << endl;
    cout << "[x] exit\n";
    auto userInput;
    cin >> userInput;
    cout << "Selected: " << userInput << endl;
}