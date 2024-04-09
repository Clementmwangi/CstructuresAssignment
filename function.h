#ifndef FUNCTION_H
#define FUNCTION_H

struct Bicycle {
    char name[100];
    char description[100];
    float price;
    char color[20];
    char gearType[20];
};

void addBicycles(struct Bicycle *bicyclesArray, int arraySize);
void printBicycles(struct Bicycle *bicyclesArray, int arraySize);

#endif

