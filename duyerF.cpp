#include "mainF.h"



void buyerFnk(int& fish, int& money) {
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
    Sleep(500);
    PlaySound(TEXT("kolokolchik.wav"), NULL, SND_FILENAME | SND_ASYNC);
    char* line1 = new char[56] { "вы видете старенький обветшалый дом приличных размеров" };
    for (size_t i = 0; line1[i] != '\0'; i++)
    {
        std::cout << line1[i];
        Sleep(50);
    }
    int key1;
    while (true)
    {
        key1 = _getch();
        if (key1 == 13) { break; }

    }
    delete[] line1;
    std::cout << "\n";
    char* line2 = new char[67] { "заходя туда вас встречает человек с сияющей улыбкой покупатель" };
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
    char* line123 = new char[34] {"приветствую тебя "};
    for (size_t i = 0; line123[i] != '\0'; i++)
    {
        std::cout << line123[i];
        Sleep(50);
    }
    int key123;
    //std::cout << name;
    while (true)
    {
        key123 = _getch();
        if (key123 == 13) { break; }

    }
    delete[] line123;
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
    for (int i = 0; i < wide; i++) { std::cout << " "; }
    int key22;
    key22 = chooiseActionsB();
    if (key22 == 0) {
        money += fish;
        fish = 0;
        char* line7 = new char[26] { "ваши монеты: " };
        for (size_t i = 0; line7[i] != '\0'; i++)
        {
            std::cout << line7[i];
            Sleep(50);
        }
        delete[] line7;
        std::cout << money;
        PlaySound(TEXT("money-soundfx.wav"), NULL, SND_FILENAME | SND_ASYNC);
        int key7;
        while (true)
        {
            key7 = _getch();
            if (key7 == 13) { break; }

        }
        std::cout << "\n";
        forestFnk(fish, money);
    }
    else {
        forestFnk(fish, money);
    }
}
