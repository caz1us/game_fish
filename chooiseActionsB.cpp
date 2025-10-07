#include "mainF.h"

int chooiseActionsB() {
    std::string arr_color[2]{ "31", "37"};
    int search;
    while (true)
    {
        HWND consoleWindow = GetConsoleWindow();
        RECT rect;
        GetWindowRect(consoleWindow, &rect);
        int width = rect.right - rect.left;
        int height = rect.bottom - rect.top;
        float wide = (width / 23) / 2;
        wide = static_cast<int>(wide);
        float addition = width / 67;
        float heig = ((height / 44) / 2) - 5;
        heig = static_cast<int>(heig);
        for (size_t i = 0; i < heig; i++)
        {
            std::cout << "\n";
        }
        std::cout << "\033[0;" << arr_color[0] << ";40m";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "־בלוםÿעü";
        std::cout << "\n";
        std::cout << "\033[0;" << arr_color[1] << ";40m";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "׃יעט";
        std::cout << "\n";
        int key = _getch();
        if (key == 224) {
            key = _getch();
        }

        if (key == 80)
        {
            system("cls");
            for (size_t i = 0; i < 2; i++)
            {
                if (arr_color[i] == "31") { search = i; }
            }
            if (search + 1 == 2) { continue; }
            arr_color[search + 1] = "31";
            arr_color[search] = "37";
        }
        else if (key == 72) {
            system("cls");
            for (size_t i = 0; i < 2; i++)
            {
                if (arr_color[i] == "31") { search = i; }
            }
            if (search - 1 < 0) { continue; }
            arr_color[search - 1] = "31";
            arr_color[search] = "37";
        }
        else if (key == 13) {
            system("cls");
            for (int i = 0; i < 2; i++)
            {
                if (arr_color[i] == "31") { return i; }
            }
        }
        else {
            system("cls");
        }
    }
}