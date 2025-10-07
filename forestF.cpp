#include "mainF.h"


void forestFnk(int& fish, int& money)
{
    int length = 0;
    std::string zxc;

    int z = 0;
    //PlaySound(TEXT("Krovostok_sound.wav"), NULL, SND_FILENAME | SND_ASYNC);
    setlocale(LC_ALL, "");
    std::cout << "\033[0;37;40m";
    Sleep(1000);
    system("cls");
    /*if (a != 0) 
    {
        std::cout << "придумайте им€ персонажу\n";
        while (true)
        {
            std::cin >> zxc;
            for (int i = 0; zxc[i] != '\0'; i++) {
                length++;
            }
            char* asd = new char[length];
            for (size_t i = 0; i < length; i++)
            {
                asd[i] = zxc[i];
            }

            for (int i = 0; asd[i] != length; i++) {
                if (!(asd[i] < 32 || asd[i] > 126)) { z++; }
            }
            if (z == 0) { break; }
            std::cout << "не используйте кириллицу\n";

        }
        a = 0;
    }*/
    


    if (q != 0)
    {
        char* line = new char[16] { "вы оп€ть в лесу" };
        for (size_t i = 0; line[i] != '\0'; i++)
        {
            std::cout << line[i];
            Sleep(50);
        }
        int key;
        while (true)
        {
            key = _getch();
            if (key == 224) key = _getch();
            if (key == 72) money += 100;
            if (key == 13) { break; }

        }
        delete[] line;
        Sleep(500);
        std::cout << "\n";
        char* line2 = new char[33] { "он дл€ вас стал уже как родной" };
        for (size_t i = 0; line2[i] != '\0'; i++)
        {
            std::cout << line2[i];
            Sleep(50);
        }
        delete[] line2;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }

        }
    }
    else { q = 1; }
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
    int key2;
    key2 = chooiseActionsF();
    Sleep(1000);
    int key;
    if (key2 == 0) {
        
        char* line3 = new char[33] { "вы отправл€етесь на озеро" };
        for (size_t i = 0; line3[i] != '\0'; i++)
        {
            std::cout << line3[i];
            Sleep(50);
        }
        delete[] line3;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }

        }
        std::cout << "\n";
        lakeFnk(fish, money);
    }
    else if (key2 == 1) {
        char* line4 = new char[43] { "вы отправл€етесь к торговцу удочками" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }

        }
        std::cout << "\n";
        traderFnk(fish, money);
    }
    else if (key2 == 2){
        char* line4 = new char[43] { "вы отправл€етесь к покупателю" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }

        }
        std::cout << "\n";
        buyerFnk(fish, money);
    }
    else if (key2 == 3){
        char* line4 = new char[43] { "вы возвращаетесь в лес" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }
        }
        std::cout << "\n";
        forestFnk(fish, money);
    }
    else if (key2 == 7) {
        std::cout << "\033[1;31;40m";
        char* line4 = new char[73] { "¬џ ќ“ѕ–ј¬Ћя≈“≈—№ ¬ ‘»ЌјЋ№Ќ”ё Ћќ ј÷»ё" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        std::cout << "\033[0;37;40m";
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }
        }
        std::cout << "\n";
        finalFnk(fish, money);
    }
    else if (key2 == 4) {
        char* line4 = new char[43] { "вы сохранились" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }
        }
        std::cout << "\n";
        saveFnk(fish, money);
    }
    else if (key2 == 5) {
        char* line4 = new char[43] { "вы удалили сохранение" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }
        }
        std::cout << "\n";
        deleteFnk(fish, money);
    }
    else if (key2 == 6) {
        std::cout << "\033[1;37;40m";
        char* line4 = new char[73] { "вы отправл€етесь к зачарователю" };
        for (size_t i = 0; line4[i] != '\0'; i++)
        {
            std::cout << line4[i];
            Sleep(50);
        }
        std::cout << "\033[0;37;40m";
        delete[] line4;
        while (true)
        {
            key = _getch();
            if (key == 13) { break; }
        }
        std::cout << "\n";
        wizardFnk(fish, money);
        }
}