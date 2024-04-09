#include <stdio.h>
#include "function.h"

void addBicycles(struct Bicycle *bicyclesArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Bicycle %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", bicyclesArray[i].name);
        printf("Description: ");
        scanf("%s", bicyclesArray[i].description);
        printf("Price: ");
        scanf("%f", &bicyclesArray[i].price);
        printf("Color: ");
        scanf("%s", bicyclesArray[i].color);
        printf("Gear Type: ");
        scanf("%s", bicyclesArray[i].gearType);
    }
}

void printBicycles(struct Bicycle *bicyclesArray, int arraySize) {
    printf("\nBicycle Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Bicycle %d:\n", i + 1);
        printf("Name: %s\n", bicyclesArray[i].name);
        printf("Description: %s\n", bicyclesArray[i].description);
        printf("Price: %.2f\n", bicyclesArray[i].price);
        printf("Color: %s\n", bicyclesArray[i].color);
        printf("Gear Type: %s\n", bicyclesArray[i].gearType);
    }
}

