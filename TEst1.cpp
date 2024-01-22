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
    std::cout << "\033[2J\033[1;1H";
    //checking internet
    int status = system("ping -c 1 google.com");
    if (status != 0) {
        //no more interwebs
        std::cout << "\033[2J\033[1;1H";;;
        std::cout << "No intenet detected! Please connect!" << std::endl;
        system("pause");
        main();
    }
    else {
        //internet check passed
        std::cout << "\033[2J\033[1;1H";
        system("Title CW-I");
        //Intro here
        std::cout << "****************************|CW-I|**************************** \n";
        std::cout << "By VPeti \n";
        system("pause");
        std::cout << "Loading libraries please wait \n";
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
            //if exists it runst the program
            std::cout << "Previus instance detected \n";
            std::cout << "Welcome to CW \n";
            //Choice maker 2000
            std::string input;
            std::cout << "Please select install type (basic,gamer,custom or debloat): \n ";
            std::cout << "Other options: exit,about \n";
            std::cin >> input;
            if (input == "gamer" || input == "Gamer") {
                //runs command basic and gamer apps
                ////system("choco install vlc notepadplusplus phyton winrar jre8 steam epicgameslaucher discord");
                //browser selector
                std::string input;
                std::cout << "What browser do you want?: \n";
                std::cout << "(chrome or firefox) \n";
                std::cin >> input;
                if (input == "chrome") {
                    system("choco install googlechrome -y");
                    std::cout << "Install done \n";
                    system("pause");
                    main(); 
                }
                else if (input == "firefox") {
                    system("choco install firefox");
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
                //runs command basic apps
                system("choco install vlc imgburn notepadplusplus phyton winrar jre8 ");
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
                system("md C:\CW");
                //install winaero and unzip
                system("choco install winaero-tweaker unzip -y");
                //from here
                //downloads debloat
                system("powershell Invoke-WebRequest -Uri https://codeload.github.com/Sycnex/Windows10Debloater/zip/refs/heads/master -OutFile C:\CW\deb.zip");
                //extraxxt
                system("unzip -q C:\CW\deb.zip -d C:\CW");
                //run & pray
                system("powershell C:\\CW\\Windows10Debloater-master\\Windows10DebloaterGUI.ps1");
                //to here uses BPS
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
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "Using CPP \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "BPS Framework by VPeti_ \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "\033[2J\033[1;1H";
                std::cout << "Build number 1.0E \n";
                system("pause");
                main();


            }
            else if (input == "exit" || input == "Exit") {
                std::cout << "Goodbye!";
                wait1

            }
            else if (input == "custom" || input == "Custom") {
                std::string input;
                std::cout << "Enter packages name(s): ";
                std::cin >> input;
                system(("cmd /c choco install " + input).c_str());


                }

            

            else
            {
                //If the user enters something wrong it exits
                std::cout << "Try again \n";
                system("pause");
                main();
            }
        }

        else {
            std::cout << "No previus instance detected \n";
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


