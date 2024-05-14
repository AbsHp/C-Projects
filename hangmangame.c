#include <stdio.h>
#include <string.h>

#define SIZE_NAME 16
#define SIZE_CHARECTERS 21

void sort(char sortedArr[][SIZE_CHARECTERS], int wordNum){

    char temp[SIZE_CHARECTERS];
    const int ONE = 1;

    for(int k = 0; k < wordNum - ONE; k++){

        for(int j = k + ONE; j < wordNum; j++){

            if(strcmp(sortedArr[k], sortedArr[j]) > 0){

                strcpy(temp, sortedArr[k]);
                strcpy(sortedArr[k], sortedArr[j]);
                strcpy(sortedArr[j], temp);
            }
        }
    }
}

