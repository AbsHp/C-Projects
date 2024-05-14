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

void shape(int stage){

    const int ZERO = 0, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6;

    if(stage == ONE){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            printf("|                |\n");
        }
        printf("|________________|\n");
    }

    else if(stage == TWO){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ONE || t == TWO){
                printf("|  **            |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    else if(stage == THREE){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    else if(stage == FOUR){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ZERO){
                printf("|  --            |\n");
            }
            else if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    else if(stage == FIVE){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ZERO){
                printf("|  --        --  |\n");
            }
            else if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

    else if(stage == SIX){
        printf(" _________________\n");
        for(int t = 0; t < FIVE; t++){
            if(t == ZERO){
                printf("|  --        --  |\n");
            }
            else if(t == ONE || t == TWO){
                printf("|  **        **  |\n");
            }
            else if(t == FOUR){
                printf("| \\/\\/\\/\\/\\/\\/\\  |\n");
            }
            else{
                printf("|                |\n");
            }
        }
        printf("|________________|\n");
    }

}

