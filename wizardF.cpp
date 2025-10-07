#include "mainF.h"

void wizardFnk(int& fish, int& money) {
    Sleep(1000);
    system("cls");
    Sleep(500);

    char* line = new char[36] { "Вы пришли к древнему чародею..." };
    for (size_t i = 0; line[i] != '\0'; i++) {
        std::cout << line[i];
        Sleep(50);
    }
    int key;
    while (true) {
        key = _getch();
        if (key == 13) break;
    }
    delete[] line;

    std::cout << "\n";
    Sleep(500);

    char* line2 = new char[66] { "Я могу улучшить вашу удочку магией, но это будет стоить монет!" };
    for (size_t i = 0; line2[i] != '\0'; i++) {
        std::cout << line2[i];
        Sleep(50);
    }
    while (true) {
        key = _getch();
        if (key == 13) break;
    }
    delete[] line2;

    while (true) {
        system("cls");
        HWND consoleWindow = GetConsoleWindow();
        RECT rect;
        GetWindowRect(consoleWindow, &rect);
        int width = rect.right - rect.left;
        int height = rect.bottom - rect.top;
        float wide = (width / 23) / 2;
        wide = static_cast<int>(wide);

        std::cout << "\033[0;37;40m";
        for (int i = 0; i < wide; i++) std::cout << " ";
        std::cout << "Зачаровать на Удачу (15 монет)\n";

        for (int i = 0; i < wide; i++) std::cout << " ";
        std::cout << "Зачаровать на Прочность (20 монет)\n";

        for (int i = 0; i < wide; i++) std::cout << " ";
        std::cout << "Зачаровать на Магнетизм (18 монет)\n";

        for (int i = 0; i < wide; i++) std::cout << " ";
        std::cout << "Уйти\n";

        int choice = chooiseActionsW();

        if (choice == 0) { // Удача
            if (money < 15) {
                std::cout << "Недостаточно монет!\n";
                forestFnk(fish, money);
            }
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
            money -= 15;
            globalFish += 1;
            globalFishEpic += 1;
            forestFnk(fish, money);

        }
        else if (choice == 1) { // Прочность
            if (money < 20) {
                std::cout << "Недостаточно монет!\n";
                forestFnk(fish, money);
            }
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
            money -= 20;
            globalMax += 100;
            forestFnk(fish, money);

        }
        
        else {
            forestFnk(fish, money);
        }
    }


}