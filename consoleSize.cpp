#include "mainF.h"

void setConsoleFontSize(int fontSize) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    GetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
    cfi.dwFontSize.Y = fontSize;
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}