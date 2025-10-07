#include "mainF.h"

void deleteFnk(int& fish, int& money) {
    if (remove("fileSave.txt") != 0) {
        char* line = new char[26] { "сначалa создайте файл" };
        for (size_t i = 0; line[i] != '\0'; i++)
        {
            std::cout << line[i];
            Sleep(50);
        }
        int key;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }

        }
        delete[] line;
        std::cout << "\n";
    }
    else {
        char* line = new char[26] { "Успех вы удалили файл" };
        for (size_t i = 0; line[i] != '\0'; i++)
        {
            std::cout << line[i];
            Sleep(50);
        }
        int key;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }

        }
        delete[] line;
        std::cout << "\n";
    }
    fish = 0;
    money = 0;
    globalMin = 4;
    globalMax = 200;
    globalFish = 1;
    globalFishEpic = 2;
    a = 1;
    forestFnk(fish, money);
}