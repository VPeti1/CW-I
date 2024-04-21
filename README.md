# CW-I
A simple package mananger wrapper with some extra features

# How to build with VS (Legacy v1.7.0 for Windows)?
## Clone the repo
## Open the .sln file in the "Legacy" folder
## Click build 

# How to build with MINGW (Windows)?
# Open MSYS2
# Install mingw and git
pacman -S mingw-w64-x86_64-gcc git
# Clone the repo
git clone https://github.com/VPeti1/CW-I.git
# Compile the source code
g++ -static main.cpp -o CW-I.exe

# How to build with g++ (Linux) ?
## Clone the repo
## Compile the source code
g++ main.cpp -o CWI.out


# What are its features?
## It has basic,gamer,developer and custom install modes
## It can debloat your computer with minimal hassle
## It can clean your computer

# Known issues
## The program dosnt contain a signature so most antivirus programs show a false positive
## The program hangs for 2-3 seconds on startup (1.7.0 only!)
This is not a bug, this is intended and used for enabling the devmenu and skipcheck mode

# Devmenu and skipcheck mode keybinds (v1.7.0 only!)
## To enable the devmenu press ESCAPE on startup within 1 second
## To enable skipcheck mode press S on startup within 1 second


