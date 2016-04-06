#include <stdio.h>
#include "io.h"
#include "file.h"

#define NumberNotFoundInArray -1


int findNumberInArray(int inputArray[], int arrayLength, int numberToSearch);

int main() {
    int arrayLength = 5;
    int inputArray[arrayLength];

    readIntArray(inputArray, arrayLength);

    int numberToSearch = readIntFromCommandline();

    int indexOfNumberToSearch = findNumberInArray(inputArray, arrayLength, numberToSearch);

    char outputString[20];
    outputString[16] = outputString[17] = outputString[18] = outputString[19] = '\0';
    sprintf(outputString, "Der Index ist %d.", indexOfNumberToSearch);

    printlnString(outputString);

    writeToFile("ergebnis.txt", outputString);

    return 0;
}

int findNumberInArray(int inputArray[], int arrayLength, int numberToSearch) {
    for(int index = 0; index < arrayLength; index++) {
        if(inputArray[index] == numberToSearch) {
            return index;
        }
    }

    return NumberNotFoundInArray;
}