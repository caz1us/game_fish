#include "mainF.h"

void saveFnk(int& fish, int& money) {
    std::ofstream outFile("fileSave.txt");
    if (outFile.is_open()) {
        outFile << fish << "\n";
        outFile << money << "\n";
        outFile << globalMin << "\n";
        outFile << globalMax << "\n";
        outFile << globalFish << "\n";
        outFile << globalFishEpic << "\n";
        //outFile << name << "\n";
        outFile.close();
        forestFnk(fish, money);
    }
    else {
        std::cout << "Ошибка сохранения. (Cорян, разраб даун)\n";
    }
}