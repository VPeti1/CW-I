#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include<stdio.h>
#include <conio.h>
#define wgeti system("choco install wget -y");
#define wait1 std::this_thread::sleep_for(std::chrono::seconds(1));
#define clear std::cout << "\033[2J\033[1;1H";
using namespace std;

bool checkInternet() {
    int status = system("ping -c 1 google.com");
    return (status == 0);
}

void depinstall() {
    std::cout << "No chocolatey detected \n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\033[2J\033[1;1H";
    system("pause");
    std::cout << "Installing chocolatey. \n";
    std::cout << "DO NOT DISCONNECT FROM THE INTERNET OR CLOSE THIS WINDOW! \n";
    //install choco
    system("powershell Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))");
    //creates the file
    std::cout << "Dependency install complete\n";
    system("pause");
}

void browserselect() {
    std::string input;
    std::cout << "What browser do you want? (chrome or firefox) \n: ";
    std::cin >> input;

    if (input == "chrome" || input == "Chrome") {
        system("choco install googlechrome -y");
        std::cout << "Install done ";
        wait1
    }
    else if (input == "firefox" || input == "Firefox") {
        system("choco install firefox -y");
        std::cout << "Install done ";
        wait1
    }
    else {
        std::cout << "Invalid browser name. No browser installation performed.\n";
        wait1
    }
}

void devActive() {
    cout << "Enter a devflag \n";
    cout << "(browserinstall,depinstall,wgetinstall,adddummychoco) \n";
    std::string input;
    std::cin >> input;
    if (input == "browserinstall" || input == "Browserinstall") {
        browserselect();

    }
    if (input == "depinstall" || input == "Depinstall") {
        depinstall();
    }
    if (input == "wgetinstall" || input == "Wgetinstall") {
        wgeti
        system("pause");

    }
    if (input == "adddummychoco" || input == "Adddummychoco") {
        std::ofstream outfile("C:\\ProgramData\\chocolatey\\bin\\choco.exe");
    }
    else {
        cout << "No valid flag was entered. Continuing operation \n";
        //goto main
    }
}

void devMenuCheck() {
    const int ESC = 27;
    bool escPressed = false;

    // Wait for ESC key or timeout
    //By the way why didnt i use the other timer???????
    auto start = std::chrono::high_resolution_clock::now();
    while (!escPressed) {
        if (_kbhit()) {
            char key = _getch();
            if (key == ESC) {
                escPressed = true;
            }
        }

        auto now = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count();
        if (duration >= 1000) {
            break; // 1s Timeout
        }
    }

    if (escPressed) {
        std::cout << " ________  ___       __                  ___     \n";
        std::cout << "|\\   ____\\|\\  \\     |\\  \\               |\\  \\    \n";
        std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\  ____________\\ \\  \\   \n";
        std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\|\\____________\\ \\  \\  \n";
        std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\|____________|\\ \\  \\ \n";
        std::cout << "   \\ \\_______\\ \\____________\\              \\ \\__\\\n";
        std::cout << "    \\|_______|\\|____________|               \\|__|\n";
        std::cout << "\n";
        std::cout << "DEVMENU ACTIVE \n";
        wait1
        devActive();
        
    }
    else {
        //goto main :)
    }
}





int main() {
    int skip = 0;
    system("Title CW-I");
    devMenuCheck();
    char key;
    bool sKeyPressed = false;
    auto startTime = std::chrono::high_resolution_clock::now();

    while (true) {
        if (_kbhit()) {
            key = _getch();
            if (key == 's' || key == 'S') {
                sKeyPressed = true;
                break;
            }
        }

        auto currentTime = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();

        if (duration >= 1000) {
            break;
        }
    }

    if (sKeyPressed) {
        skip = 1;
        cout << "Checks skipped";
    }
    //checking internet
    // If 'skip' is not equal to 1, perform internet check
    if (skip != 1) {
        if (checkInternet()) {
            std::cout << "Internet check passed!" << std::endl;
        }
        else {
            // No internet or admin privileges detected
            std::cout << "\033[2J\033[1;1H";
            std::cout << "No internet or admin privileges detected! Please connect to the internet or rerun the program." << std::endl;
            system("pause");
            main();
        }
    }

        //internet check passed
        std::cout << "\033[2J\033[1;1H";
        //Intro here
        std::cout << " ________  ___       __                  ___     \n";
        std::cout << "|\\   ____\\|\\  \\     |\\  \\               |\\  \\    \n";
        std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\  ____________\\ \\  \\   \n";
        std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\|\\____________\\ \\  \\  \n";
        std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\|____________|\\ \\  \\ \n";
        std::cout << "   \\ \\_______\\ \\____________\\              \\ \\__\\\n";
        std::cout << "    \\|_______|\\|____________|               \\|__|\n";
        std::cout << "\n";
        std::cout << "By VPeti \n";
        system("pause");
        wait1
            std::cout << "\033[2J\033[1;1H";
        std::cout << "Loading: 30% \n";
        wait1
            std::cout << "\033[2J\033[1;1H";
        std::cout << "Loading: 60% \n";
        wait1
            std::cout << "\033[2J\033[1;1H";
        std::cout << "Loading: 90% \n";
        wait1
            std::cout << "\033[2J\033[1;1H";
        //to here

        // try to open file to read
        ifstream ifile;
        ifile.open("C:\\ProgramData\\chocolatey\\bin\\choco.exe");
        if (ifile) {
            //if exists it runs the program
            std::cout << "Welcome to CW-I \n";
            //Choice maker 2000
            std::string input;
            std::cout << "Please select install type (basic,gamer,custom,developer or debloat): \n";
            std::cout << "Other options: exit,about and update \n";
            std::cout << "You can lauch CWCare-I by typing in care \n";
            std::cin >> input;
            if (input == "gamer" || input == "Gamer") {
                clear
                //runs command basic and gamer apps
                system("choco install vlc notepadplusplus phyton winrar jre8 steam epicgameslaucher discord -y");
                //browser selector
                browserselect();

            }
            else if (input == "basic" || input == "Basic") {
                clear
                //runs command basic apps
                system("choco install vlc imgburn notepadplusplus phyton winrar jre8 -y");
                std::string input;
                std::cout << "Do you want libreoffice?: \n";
                std::cin >> input;
                if (input == "yes" || input == "Yes") {
                    system("choco install libreoffice -y");
                    //install browser
                    browserselect();
                }

                else {
                    //browser selector
                    browserselect();
                }

            }
            else if (input == "debloat" || input == "Debloat") {
                clear
                system("md C:\\CW");
                //install winaero and unzip
                system("choco install wget -y");
                //downloads debloat
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/deb.ps1 -O C:\\CW\\CWI.ps1");
                //run & pray
                system("powershell C:\\CW\\CWI.ps1");
                std::cout << "Debloat complete \n";
                system("pause");
                main();


            }
            else if (input == "about" || input == "About") {
                //Does the credits thing
                std::cout << "\033[2J\033[1;1H";
                std::cout << "Clean-Wise version 3 (I) \n";
                std::cout << "By VPeti \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "Welcome to 2024 \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "A new era a new language \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "Using CPP \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "Build number v1.7.0 \n";
                system("pause");
                main();


            }
            else if (input == "exit" || input == "Exit") {
                clear
                std::cout << "Goodbye!";
                wait1

            }
            else if (input == "custom" || input == "Custom") {
                clear
                std::string input;
                std::cout << "Enter packages name(s): ";
                std::cin >> input;
                system(("cmd /c choco install " + input).c_str());
                system("pause");
                main();


            }

            else if (input == "developer" || input == "Developer") {
                clear
                system("choco install vlc imgburn notepadplusplus phyton winrar jre8 vscode visualstudio2022community wget msys2 -y");
                //browser selector
                browserselect();

            }

            else if (input == "care" || input == "Care") {
                clear
                std::cout << "  ________  ___       __   ________  ________  ________  _______                  ___     " << std::endl;
                std::cout << "|\\   ____\\|\\  \\     |\\  \\|\\   ____\\|\\   __  \\|\\   __  \\|\\  ___ \\                |\\  \\    " << std::endl;
                std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\|\\  \\ \\   __/|   ____________\\ \\  \\   " << std::endl;
                std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\ \\  \\    \\ \\   __  \\ \\   _  _\\ \\  \\_|/__|\\____________\\ \\  \\  " << std::endl;
                std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\\\  \\\\ \\  \\_|\\ \\|____________|\\ \\  \\ " << std::endl;
                std::cout << "   \\ \\_______\\ \\____________\\ \\_______\\ \\__\\ \\__\\ \\__\\\\ _\\\\ \\_______\\              \\ \\__\\" << std::endl;
                std::cout << "    \\|_______|\\|____________|\\|_______|\\|__|\\|__|\\|__|\\|__|\\|_______|               \\|__|" << std::endl;
                system("pause");
                system("choco install wget -y");
                system("md C:\\CW");
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWCare-I.bat -O C:\\CW\\care.bat");
                system("cmd /c C:\\CW\\care.bat");
                system("pause");
                clear
                main();
            }

            else if (input == "update" || input == "Update") {
                clear
                std::cout << "Downloading the latest file \n";
                system("choco install wget -y");
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWI.EXE -O %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWI.exe");
                system("cmd /c %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWI.exe");
                system("pause");
                wait1
            }


            else
            {
                //If the user enters something wrong it resets
                std::cout << "Try again \n";
                system("pause");
                main();
            }
        }

        else {
            depinstall();
            main();
        }
    }



