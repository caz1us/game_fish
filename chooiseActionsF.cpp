#include "mainF.h";

int chooiseActionsF() {
    std::string arr_color[8]{ "31", "37", "37", "37", "37", "37", "37", "37"};
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
        std::cout << "Озеро";
        std::cout << "\n";
        std::cout << "\033[0;" << arr_color[1] << ";40m";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "Торговец";
        std::cout << "\n";
        std::cout << "\033[0;" << arr_color[2] << ";40m";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "Покупатель";
        std::cout << "\n";
        std::cout << "\033[0;" << arr_color[3] << ";40m";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "Лес";
        std::cout << "\n";
        std::cout << "\033[0;" << arr_color[4] << ";40m";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "Сохранится";
        std::cout << "\n";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "\033[0;" << arr_color[5] << ";40m";
        std::cout << "Удалить сохранение";
        std::cout << "\n";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "\033[0;" << arr_color[6] << ";40m";
        std::cout << "Зачарователь";
        std::cout << "\n";
        for (int i = 0; i < wide; i++) { std::cout << " "; }
        std::cout << "\033[0;" << arr_color[7] << ";40m";
        std::cout << "Финальная локация";
        std::cout << "\n";
        int key = _getch();
        if (key == 224) {
            key = _getch();
        }

        if (key == 80)
        {
            system("cls");
            for (size_t i = 0; i < 8; i++)
            {
                if (arr_color[i] == "31") { search = i; }
            }
            if (search + 1 == 8) { continue; }
            arr_color[search + 1] = "31";
            arr_color[search] = "37";
        }
        else if (key == 72) {
            system("cls");
            for (size_t i = 0; i < 8; i++)
            {
                if (arr_color[i] == "31") { search = i; }
            }
            if (search - 1 < 0) { continue; }
            arr_color[search - 1] = "31";
            arr_color[search] = "37";
        }
        else if (key == 13) {
            system("cls");
            for (int i = 0; i < 8; i++)
            {
                if (arr_color[i] == "31") { return i; }
            }
        }
        else {
            system("cls");
        }
    }
}