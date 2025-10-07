#include "mainF.h"

int chooiseActionsW() {
    int selected = 0;
    while (true) {
        HWND consoleWindow = GetConsoleWindow();
        RECT rect;
        GetWindowRect(consoleWindow, &rect);
        int width = rect.right - rect.left;
        float wide = (width / 23) / 2;
        wide = static_cast<int>(wide);

        system("cls");

        // Удача
        for (int i = 0; i < wide; i++) std::cout << " ";
        if (selected == 0) std::cout << "\033[1;31;40m";
        else std::cout << "\033[0;37;40m";
        std::cout << "Зачаровать на Удачу (15 монет)\n";

        // Прочность
        for (int i = 0; i < wide; i++) std::cout << " ";
        if (selected == 1) std::cout << "\033[1;31;40m";
        else std::cout << "\033[0;37;40m";
        std::cout << "Зачаровать на Прочность (20 монет)\n";

        // Уйти
        for (int i = 0; i < wide; i++) std::cout << " ";
        if (selected == 2) std::cout << "\033[1;31;40m";
        else std::cout << "\033[0;37;40m";
        std::cout << "Уйти\n";

        std::cout << "\033[0;37;40m";

        int key = _getch();
        if (key == 224) key = _getch();

        if (key == 72 && selected > 0) selected--;
        else if (key == 80 && selected < 2) selected++;
        else if (key == 13) return selected;
    }
}