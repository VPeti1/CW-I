#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include<stdio.h>
#include <unistd.h>
#define wait1 sleep(1);
#define clear system((clearscreen).c_str());
using namespace std;

string clearscreen;
string pm;
string pausec;
string chrome;
string firefox;
string libreoffice;
string steam;
string vlc;
string unzip;
string discord;
string vs;
const string sp = " ";

bool checkosvar(){
    if (clearscreen == "cls") {
        return 1;
    }
    else {
        return 2;
    }
    
}

void depinstall() {
    ifstream ifile;
    ifile.open("C:\\ProgramData\\chocolatey\\bin\\choco.exe");
    if (!ifile) {
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
}

void checkos(){
    #if defined(_WIN32)
        depinstall();
        system("Title CW-I");
        clearscreen = "cls";
        pm = "choco install -y ";
        pausec = "pause";
        firefox = "firefox";
        chrome = "googlechrome";
        libreoffice = "libreoffice";
        steam = "steam";
        vlc = "vlc";
        unzip = "winrar";
        discord = "discord";
        vs = "vscode";
    #elif defined(__linux__)
        clearscreen = "clear";
        pm = "flatpak install -y ";
        pausec = "read -p 'Press enter to continue '";
        firefox = "org.mozilla.firefox";
        chrome = "com.google.chrome";
        libreoffice = "org.libreoffice.LibreOffice";
        steam = "com.valvesoftware.Steam";
        vlc = "org.videolan.VLC";
        unzip = "io.github.peazip.peazip";
        discord = "com.discordapp.Discord";
        vs = "com.visualstudio.code";
    #else
        std::cout << "Your operating system is unsupported." << std::endl;
        wait1
        exit(1);
    #endif
}


void bs() {
            std::string input;
            std::cout << "What browser do you want?: \n";
            std::cout << "(chrome or firefox) \n";
            std::cin >> input;
            if (input == "chrome" || input == "Chrome") {
                system((pm + chrome).c_str());
                std::cout << "Install done \n";
            }
            else if (input == "firefox" || input == "Firefox") {
                system((pm + firefox).c_str());
                std::cout << "Install done \n";

            }
            else {
                std::cout << "No valid browser name was entered! No browser install will be performed! \n";
            }
}


int main() {
        checkos();
        system((clearscreen).c_str());
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
        wait1
        wait1
        int osvar = checkosvar();
        if (osvar == 1) {
            std::cout << "Please select install type (basic,gamer,custom,developer or debloat): \n";
            std::cout << "Other options: exit,about and update \n";
            std::cout << "You can lauch CWCare-I by typing in care \n";
        }
        else {
            std::cout << "Welcome to OpenCW! \n";
            std::cout << "Please select install type (basic,gamer,custom,developer): \n";
            std::cout << "Other options: exit,about,aiopm and update \n";
        }
    
        std::string input;
        std::cin >> input;
        if (input == "gamer" || input == "Gamer") {
            clear
                system((pm + vlc + sp + steam + sp + discord + unzip).c_str());
                bs();
                system(pausec.c_str());
                main();

        }
        else if (input == "basic" || input == "Basic") {
            clear
                //runs command basic apps
                system("flatpak install org.videolan.VLC io.github.peazip.PeaZip -y");
                system((pm + vlc + sp + unzip).c_str());
            std::string input;
            std::cout << "Do you what libreoffice?: \n";
            std::cin >> input;
            if (input == "yes" || input == "Yes") {
                system("flatpak install org.libreoffice.LibreOffice -y");
                system((pm + libreoffice).c_str());
                bs();
                system(pausec.c_str());
                main();
            }
            else {
                bs();
                system(pausec.c_str());
                main();
            }
        }

        else if (input == "about" || input == "About") {
            //Does the credits thing
            system((clearscreen).c_str());
            std::cout << "New Clean-Wise version 3 (I) \n";
            std::cout << "By VPeti \n";
            sleep(1);
            system((clearscreen).c_str());
            std::cout << "Build number v1.8.0 \n";
            system(pausec.c_str());
            main();


        }
        else if (input == "exit" || input == "Exit") {
            clear
                std::cout << "Goodbye! \n";
            wait1
            exit(0);

        }
        else if (input == "custom" || input == "Custom") {
            clear
                std::string input;
            std::cout << "Enter packages name(s): ";
            std::cin >> input;
            system((pm + input).c_str());
            wait1
            wait1
            main();


        }

        else if (input == "developer" || input == "Developer") {
            clear
            system((pm + vlc + sp + vs + sp + unzip).c_str());
            bs();
            system(pausec.c_str());
            main();
        }

        else if (input == "update" || input == "Update") {
            clear
            std::cout << "Make sure you have WGET installed! \n";
            wait1
            if (osvar = 1) {
                clear
                std::cout << "Downloading the latest file \n";
                system("choco install wget -y");
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWI.EXE -O %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWI.exe");
                system("cmd /c %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWI.exe");
                system("pause");
            }
            else {
                std::cout << "Downloading the latest file\n";
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/OpenCW/OpenCW.out -O $HOME/OpenCW.out ");
                system("chmod +x $HOME/OpenCW.out");
                system("$HOME/OpenCW.out");
            }

            system(pausec.c_str());
            main();
        }
        
        else if (input == "care" || input == "Care") {
            if (osvar = 1) {
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
        }

        else if (input == "debloat" || input == "Debloat") {
            if (osvar = 1) {
            clear
            system("md C:\\CW");
            system("choco install wget -y");
            //downloads debloat
            system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/deb.ps1 -O C:\\CW\\CWI.ps1");
            //run & pray
            system("powershell C:\\CW\\CWI.ps1");
            std::cout << "Debloat complete \n";
            system("pause");
            main();
            }
        }

        else
        {
            //If the user enters something wrong it resets
            std::cout << "Try again \n";
            main();
        }
    }







        
    



