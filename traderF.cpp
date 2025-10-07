#include "mainF.h"


void traderFnk(int& fish, int& money)
{
    setlocale(LC_ALL, "");

    Sleep(1000);
    system("cls");
    Sleep(500);
    char* line = new char[26] { "путь..." };
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
    PlaySound(TEXT("kolokolchik.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Sleep(500);
    char* line2 = new char[26] { "вы пришли" };
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
    char* line3 = new char[66] { "добро пожаловать в мою лавку удочек!!! " };
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
    //std::cout << name;
    std::cout << "\n";
    Sleep(500);
    char* line4 = new char[66] { "вас встречает мужчина в возросте со странной шляпой на голове" };
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
    delete[] line4;
    std::cout << "\n";
    Sleep(500);
    char* line5 = new char[66] { "выбирайте удочка на удачу или надежная" };
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
    std::cout << "\n";
    Sleep(500);
    char* line6 = new char[76] { "удочка на удачу 20 монет - нет неудач и х2 к рыбе высокий шанс сломаться" };
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
    Sleep(500);
    char* line7 = new char[76] { "удочка надежная 18 монет - нет неудач, маленький шанс сломаться" };
    for (size_t i = 0; line7[i] != '\0'; i++)
    {
        std::cout << line7[i];
        Sleep(50);
    }
    int key7;
    while (true)
    {
        key7 = _getch();
        if (key7 == 13) { break; }

    }
    delete[] line7;
    std::cout << "\n";
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
    int key22;
    key22 = chooiseActionsT();
    std::cout << "\033[0;37;40m";
    Sleep(1000);
    if (key22 == 0) {
        if (money - 20 < 0) {
            char* line8 = new char[76] { "недостаточно монет" };
            for (size_t i = 0; line8[i] != '\0'; i++)
            {
                std::cout << line8[i];
                Sleep(50);
            }
            int key8;
            while (true)
            {
                key8 = _getch();
                if (key8 == 13) { break; }

            }
            delete[] line8;
            std::cout << "\n";
            forestFnk(fish, money);
        }
        else {
            money -= 20;
            globalMin += 1;
            PlaySound(TEXT("money-soundfx.wav"), NULL, SND_FILENAME | SND_ASYNC);
            char* line8 = new char[76] { "спасибо за покупку!!!" };
            for (size_t i = 0; line8[i] != '\0'; i++)
            {
                std::cout << line8[i];
                Sleep(50);
            }
            int key8;
            while (true)
            {
                key8 = _getch();
                if (key8 == 13) { break; }

            }
            delete[] line8;
            std::cout << "\n";
            globalMax -= 100;
            globalFish*=2;
            globalFishEpic *= 2;
            forestFnk(fish, money);
        }
    }
    else if (key22 == 1) {
        if (money - 18 < 0) {
            char* line8 = new char[76] { "недостаточно монет" };
            for (size_t i = 0; line8[i] != '\0'; i++)
            {
                std::cout << line8[i];
                Sleep(50);
            }
            int key8;
            while (true)
            {
                key8 = _getch();
                if (key8 == 13) { break; }

            }
            delete[] line8;
            std::cout << "\n";
            forestFnk(fish, money);
        }
        else {
            money -= 18;
            PlaySound(TEXT("money-soundfx.wav"), NULL, SND_FILENAME | SND_ASYNC);
            char* line8 = new char[76] { "спасибо за покупку!!!" };
            for (size_t i = 0; line8[i] != '\0'; i++)
            {
                std::cout << line8[i];
                Sleep(50);
            }
            int key8;
            while (true)
            {
                key8 = _getch();
                if (key8 == 13) { break; }

            }
            delete[] line8;
            std::cout << "\n";
            globalMin = 5;
            globalMax = 500;
            forestFnk(fish, money);
        }
    }
    else {
        char* line8 = new char[76] { "приходите еще!!!" };
        for (size_t i = 0; line8[i] != '\0'; i++)
        {
            std::cout << line8[i];
            Sleep(50);
        }
        int key8;
        while (true)
        {
            key8 = _getch();
            if (key8 == 13) { break; }

        }
        delete[] line8;
        std::cout << "\n";
        forestFnk(globalFish, money);
    }
}
