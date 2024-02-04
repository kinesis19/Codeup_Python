#include <string.h>
#include <stdio.h>

int main() {
    char userInput[3] = {'\0', };

    scanf("%s", &userInput);

    if(strcmp(userInput, "A+") == 0){
        printf("4.3");
    }else if(strcmp(userInput, "A0") == 0){
        printf("4.0");
    }else if(strcmp(userInput, "A-") == 0){
        printf("3.7");
    }else if(strcmp(userInput, "B+") == 0){
        printf("3.3");
    }else if(strcmp(userInput, "B0") == 0){
        printf("3.0");
    }else if(strcmp(userInput, "B-") == 0){
        printf("2.7");
    }else if(strcmp(userInput, "C+") == 0){
        printf("2.3");
    }else if(strcmp(userInput, "C0") == 0){
        printf("2.0");
    }else if(strcmp(userInput, "C-") == 0){
        printf("1.7");
    }else if(strcmp(userInput, "D+") == 0){
        printf("1.3");
    }else if(strcmp(userInput, "D0") == 0){
        printf("1.0");
    }else if(strcmp(userInput, "D-") == 0){
        printf("0.7");
    }else if(strcmp(userInput, "F") == 0){
        printf("0.0");
    }

    return 0;
}