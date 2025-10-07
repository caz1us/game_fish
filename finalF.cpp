#include "mainF.h"

void finalFnk(int& fish, int& money) {
    Sleep(1000);
    system("cls");
    Sleep(1000);
    if (money < 100) {
        char* line = new char[66] { "к сожалению ваших монет недостаточно необходимо 100 ваши монеты: " };
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
        std::cout << money << "\n";
        forestFnk(fish, money);
    }
    PlaySound(TEXT("why-do-i-hear-boss-music.wav"), NULL, SND_FILENAME | SND_ASYNC);
    money -= 100;
    char* line2 = new char[116] { "поздравл€ю вы достигли последней локации дл€ прохождени€ игры вам нообходимо поймать ’оз€ина вод ваши шансы снижены" };
    for (size_t i = 0; line2[i] != '\0'; i++)
    {
        std::cout << line2[i];
        Sleep(50);
    }
    int key2;
    while (true)
    {
        key2 = _getch();
        if (key2 == 13) { break; }

    }
    delete[] line2;
    int key22;
    Sleep(2000);
    while (true) {
        system("cls");
        HWND consoleWindow = GetConsoleWindow();
        RECT rect;
        GetWindowRect(consoleWindow, &rect);
        int width = rect.right - rect.left;
        int height = rect.bottom - rect.top;
        float wide = (width / 23) / 2;
        wide = static_cast<int>(wide);
        float addition = width / 67;
        addition = static_cast<int>(addition);
        key22 = chooiseActions();
        std::cout << "\033[1;37;40m";
        if (key22 == 1) {
            forestFnk(fish, money);
        }
        Sleep(1000);
        //PlaySound(TEXT("zabros.wav"), NULL, SND_FILENAME | SND_ASYNC);
        for (int i = 0; i < 10; i++) {
            std::cout << "ловим...";
            Sleep(2000);
        }
        //PlaySound(TEXT("poimal.wav"), NULL, SND_FILENAME | SND_ASYNC);
        int min = 1;
        int max = 100;
        if (globalMax == 50) {
            max = 50;
        }
        int rand_item = rand() % (max + 1 - min) + min;
        if (rand_item > 10) {
            std::cout << "неудача\n";
            char* line3 = new char[16] { "неудача" };
            for (size_t i = 0; line3[i] != '\0'; i++)
            {
                std::cout << line3[i];
                Sleep(50);
            }
            int key3;
            while (true)
            {
                key3 = _getch();
                if (key3 == 13) { break; }

            }
            delete[] line3;
        }
        else {

            std::cout << "\033[1;32;40m";
            char* line3 = new char[36] { "поздравл€ю вы поймали хоз€ина вод" };
            for (size_t i = 0; line3[i] != '\0'; i++)
            {
                std::cout << line3[i];
                Sleep(50);
            }
            int key3;
            while (true)
            {
                key3 = _getch();
                if (key3 == 13) { break; }

            }
            delete[] line3;
            std::cout << "\n";
            char* line4 = new char[36] { "вы возвращаетесь в лес героем" };
            for (size_t i = 0; line4[i] != '\0'; i++)
            {
                std::cout << line4[i];
                Sleep(50);
            }
            int key4;
            while (true)
            {
                key4 = _getch();
                if (key4 == 13) { break; }

            }
            std::cout << "\n";
            std::cout << "\033[1;34;40m";
            forestFnk(fish, money);
        }
    }
}