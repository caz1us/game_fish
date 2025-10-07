#include "mainF.h"

int globalMin = 4;
int globalMax = 200;
int globalFish = 1;
int globalFishEpic = 2;
int q = 0;
int a = 123;


int randomFish() {
    int max = 6;
    int rand_item;
    return rand_item = rand() % (max + 1 - globalMin) + globalMin;

}

int randomBreak() {
    int Min = 1;
    int rand_item;
    return rand_item = rand() % (globalMax + 1 - Min) + Min;
}