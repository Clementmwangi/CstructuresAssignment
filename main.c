#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 11;
    struct Bicycle bicycles[arraySize];

    // Add bicycles to the array
    addBicycles(bicycles, arraySize);

    // Print the structure elements
    printBicycles(bicycles, arraySize);

    return 0;
}

