#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <Windows.h>
#include <fstream>
#include <filesystem>
#include<stdio.h>
#define wait1 std::this_thread::sleep_for(std::chrono::seconds(1));
#define clear std::cout << "\033[2J\033[1;1H";
using namespace std;

int main() {
    system("Title CW-I");
    //checking internet
    int status = system("ping -c 1 google.com");
    if (status != 0) {
        //no more interwebs or adminnnn privs
        std::cout << "\033[2J\033[1;1H";;;
        std::cout << "No intenet or admin privileges detected! Please connect to the internet or rerun the program!" << std::endl;
        system("pause");
        main();
    }
    else {
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
                std::string input;
                std::cout << "What browser do you want?: \n";
                std::cout << "(chrome or firefox) \n";
                std::cin >> input;
                if (input == "chrome" || input == "Chrome") {
                    system("choco install googlechrome -y");
                    std::cout << "Install done \n";
                    system("pause");
                    main();
                }
                else if (input == "firefox" || input == "Firefox") {
                    system("choco install firefox -y");
                    std::cout << "Install done \n";
                    system("pause");
                    main();

                }
                else {
                    std::cout << "Install done \n";
                    system("pause");
                    main();
                }

            }
            else if (input == "basic" || input == "Basic") {
                clear
                //runs command basic apps
                system("choco install vlc imgburn notepadplusplus phyton winrar jre8 -y");
                std::string input;
                std::cout << "Do you what libreoffice?: \n";
                std::cin >> input;
                if (input == "yes" || input == "Yes") {
                    system("choco install libreoffice -y");
                    //install browser
                    std::string input;
                    std::cout << "What browser do you want?: \n";
                    std::cout << "(chrome or firefox) \n";
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("choco install googlechrome -y");
                        std::cout << "Install done \n";
                        system("pause");
                        main();
                    }
                    else {
                        system("choco install firefox -y");
                        std::cout << "Install done \n";
                        system("pause");
                        main();

                    }

                }

                else {
                    //browser selector
                    std::string input;
                    std::cout << "What browser do you want?: ";
                    std::cout << "(chrome or firefox) \n";
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("choco install googlechrome -y");
                        std::cout << "Install done ";
                        system("pause");
                        main();
                    }
                    else if (input == "firefox" || input == "Firefox") {
                        system("choco install firefox -y");
                        std::cout << "Install done ";
                        system("pause");
                        main();

                    }
                    else {
                        std::cout << "Install done ";
                        system("pause");
                        main();
                    }


                }

            }
            else if (input == "debloat" || input == "Debloat") {
                clear
                system("md C:\\CW");
                //install winaero and unzip
                system("choco install winaero-tweaker wget -y");
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
                std::cout << "Build number v1.5.0 \n";
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
                std::string input;
                std::cout << "What browser do you want?: ";
                std::cout << "(chrome or firefox) \n";
                std::cin >> input;
                if (input == "chrome" || input == "Chrome") {
                    system("choco install googlechrome -y");
                    std::cout << "Install done ";
                    system("pause");
                    main();
                }
                else if (input == "firefox" || input == "Firefox") {
                    system("choco install firefox -y");
                    std::cout << "Install done ";
                    system("pause");
                    main();

                }




                else {
                    std::cout << "Install done ";
                    system("pause");
                    main();
                }

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
                std::cout << "File downloaded to desktop \n";
                std::cout << "Please run the file \n";
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
            std::cout << "No chocolatey detected \n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\033[2J\033[1;1H";
            system("pause");
            std::cout << "Installing chocolatey. \n";
            std::cout << "DO NOT DISCONNECT FROM THE INTERNET OR CLOSE THIS WINDOW! \n";
            //install choco with BPS
            system("powershell Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))");
            //creates the file
            std::cout << "Dependency install complete\n";
            system("pause");
            main();
        }
    }
}


