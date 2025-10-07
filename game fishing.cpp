#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "mainF.h"
#include <mmsystem.h>

int main()
{
    srand(time(NULL));
    setConsoleFontSize(44);
    setlocale(LC_ALL, "");
    int money = 0;
    int fish = 0;    
    std::ifstream inFile("fileSave.txt");
    if (inFile.is_open()) {

        inFile >> fish;
        inFile >> money;
        inFile >> globalMin;
        inFile >> globalMax;
        inFile >> globalFish;
        inFile >> globalFishEpic;
        //inFile >> name;
        inFile.close();
    }
    char* line = new char[143] {"вы проснулись в лесу вы чувствуете что вас кроме рыбалки ничего не интересует"};
    for (size_t i = 0; line[i] != '\0'; i++)
    {
        std::cout << line[i];
        Sleep(50);
    }
    std::cout << "\n";
    delete[] line;
    int key;
    while(true)
    { 
        key = _getch();
        if (key == 13) { forestFnk(fish, money); }

    }
}


