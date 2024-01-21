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
using namespace std;

int main() {
    //checking internet
    int status = system("ping -c 1 google.com");
    if (status != 0) {
        //no more interwebs
        system("clear");
        std::cout << "No intenet detected! Please connect!" << std::endl;
        system("pause");
        main();
    }
    else {
        //internet check passed
        system("clear");
        system("Title CW-I");
        //Intro here
        std::cout << "****************************|CW-I Prerelease 1|**************************** \n";
        std::cout << "By VPeti \n";
        system("pause");
        std::cout << "Loading libraries please wait \n";
        wait1
        system("clear");
        std::cout << "Loading: 30% \n";
        wait1
        system("clear");
        std::cout << "Loading: 60% \n";
        wait1
        system("clear");
        std::cout << "Loading: 90% \n";
        wait1
        system("clear");
        //to here

        // try to open file to read
        ifstream ifile;
        ifile.open("C:\CW\inst.txt");
        if (ifile) {
            //if exists it runst the program
            std::cout << "Previus instance detected \n";
            std::cout << "Welcome to CW \n";
            //Choice maker 2000
            std::string input;
            std::cout << "Please select install type (bacis,gamer,debloat,exit or about): \n";
            std::cout << "If you select debloat or about no apps will be installed \n";
            std::cin >> input;
            if (input == "gamer" || input == "Gamer") {
                //runs command bacis and gamer apps
                system("choco install vlc notepadplusplus phyton winrar jre8 steam epicgameslaucher");
                //browser selector
                std::string input;
                std::cout << "What browser do you want?: \n";
                std::cout << "(chrome or firefox) \n";
                std::cin >> input;
                if (input == "chrome") {
                    system("choco install chrome");
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
                //runs command bacis apps
                system("choco install vlc imgburn notepadplusplus phyton winrar jre8 ");
                std::string input;
                std::cout << "Do you what libreoffice?: \n";
                std::cin >> input;
                if (input == "yes" || input == "Yes") {
                    system("choco install libreoffice");
                    //install browser
                    std::string input;
                    std::cout << "What browser do you want?: \n";
                    std::cout << "(chrome or firefox) \n";
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("choco install chrome");
                        std::cout << "Install done \n";
                        system("pause");
                        main(); 
                    }
                    else {
                        system("choco install firefox");
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
                        system("choco install chrome");
                        std::cout << "Install done ";
                        system("pause");
                        main(); 
                    }
                    else if (input == "firefox" || input == "Firefox") {
                        system("choco install firefox");
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
                //install winaero and unzip
                system("choco install winaero-tweaker unzip");
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
                system("clear");
                std::cout << "Clean-Wise version 3 (I) \n";
                std::cout << "By VPeti \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                system("clear");
                std::cout << "Welcome to 2024 \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                system("clear");
                std::cout << "A new era a new language \n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                system("clear");
                std::cout << "Using CPP \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                system("clear");
                std::cout << "BPS Framework by VPeti_ \n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
                system("clear");
                std::cout << "Build number 1.0E \n";
                system("pause");
                main();


            }
            else if (input == "exit" || input == "Exit") {
                std::cout << "Goodbye!";
                wait1

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
            system("clear");
            system("pause");
            std::cout << "Installing chocolatey. \n";
            std::cout << "DO NOT DISCONNECT FROM THE INTERNET OR CLOSE THIS WINDOW! \n";
            system("md C:\CW");
            //install choco with BPS
            system("powershell Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))");
            //creates the file
            ofstream file("C:\CW\inst.txt");
            file.close();
            std::cout << "Dependency install complete\n";
            system("pause");
            main();
        }
    }
}