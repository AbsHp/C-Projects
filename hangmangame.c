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

int strList(char sortedArr[][SIZE_CHARECTERS], char mainStr[], char hint[], char sep[]){

    const char start = ':';

    for(int i = 0; mainStr[i] != start; i++){
        hint[i] = mainStr[i];
    }

    char *token;
    token = strchr(mainStr, start);

    token += sizeof(char);
    token = strtok(token, sep);

    int wordNum = 0;

    while (token != NULL){
        strcpy(sortedArr[wordNum], token);
        token = strtok(NULL, sep);
        wordNum++;
    }

    return wordNum;
}

