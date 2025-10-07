#include "mainF.h"


void lakeFnk(int& fish, int& money) {
    Sleep(1000);
    system("cls");
    Sleep(500);
    char* line = new char[16] { "путь..." };
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
    Sleep(500);
    char* line2 = new char[56] { "вы пришли, вы видете перед собой живописное озеро" };
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
    std::cout << "\n";
    Sleep(500);
    char* line3 = new char[66] { "лучи отражаемые солнцем на водной глади слегка поблесивают" };
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
    int key22;
    while (true)
    {
        Sleep(1000);
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
        if (key22 == 1) {
            forestFnk(fish, money);
        }
        char* line5 = new char[66] { "начинаем рыбалку" };
        for (size_t i = 0; line5[i] != '\0'; i++)
        {
            std::cout << line5[i];
            Sleep(50);
        }
        int key5;
        while (true)
        {
            key5 = _getch();
            if (key5 == 13) { break; }

        }
        delete[] line5;
        PlaySound(TEXT("zabros.wav"), NULL, SND_FILENAME | SND_ASYNC);
        Sleep(1000);
        std::cout << "\n";
        for (int i = 0; i < 10; i++) {
            std::cout << "ловим...";
            Sleep(1000);
        }
        PlaySound(TEXT("poimal.wav"), NULL, SND_FILENAME | SND_ASYNC);
        int rand = randomFish();
        if (rand < 5) {
            char* line6 = new char[26] { "неудача(" };
            for (size_t i = 0; line6[i] != '\0'; i++)
            {
                std::cout << line6[i];
                Sleep(50);
            }
            int key6;
            while (true)
            {
                key6 = _getch();
                if (key6 == 13) { break; }

            }
            delete[] line6;
            std::cout << "\n";
        }
        else if (rand == 5) {
            fish += globalFish;
            char* line6 = new char[26] { "удача карась +" };
            for (size_t i = 0; line6[i] != '\0'; i++)
            {
                std::cout << line6[i];
                Sleep(50);
            }
            int key6;
            delete[] line6;
            std::cout << globalFish << "\n";
            while (true)
            {
                key6 = _getch();
                if (key6 == 13) { break; }

            }
        }
        else if (rand == 6) {
            fish += globalFishEpic;
            char* line7 = new char[26] { "сверх удача!!! +" };
            for (size_t i = 0; line7[i] != '\0'; i++)
            {
                std::cout << line7[i];
                Sleep(50);
            }
            int key7;
            delete[] line7;
            std::cout << globalFishEpic << "\n";
            while (true)
            {
                key7 = _getch();
                if (key7 == 13) { break; }

            }
        }
        if (randomBreak() < 21 && globalMin != 1) {
            Sleep(500);
            char* line11 = new char[36] { "о нет ваша удочка сломалась" };
            for (size_t i = 0; line11[i] != '\0'; i++)
            {
                std::cout << line11[i];
                Sleep(50);
            }
            int key11;
            while (true)
            {
                key11 = _getch();
                if (key11 == 13) { break; }

            }
            delete[] line11;
            std::cout << "\n";
            char* line12 = new char[56] { "теперь вы ловите руками, ваши шансы уменьшины в 4 раза" };
            for (size_t i = 0; line12[i] != '\0'; i++)
            {
                std::cout << line12[i];
                Sleep(50);
            }
            int key12;
            while (true)
            {
                key12 = _getch();
                if (key12 == 13) { break; }

            }
            delete[] line12;
            std::cout << "\n";
            globalMin = 1;
        }
    }
}
