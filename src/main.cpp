#include <libremidi/libremidi.hpp>
#include "mainMenu.hpp"
#include <iostream>

int main() {

    // main menu
    mainMenu();

    // single note loop
    // for (auto i = 0; i < 8; i++) {
    //     midiout.send_message(144, 64, 90);
    //     std::this_thread::sleep_for(500ms);
    //     midiout.send_message(128, 64, 40);
    //     std::this_thread::sleep_for(500ms);
    // } 

    return 0;
}
