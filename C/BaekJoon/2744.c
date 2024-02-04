#include <string.h>
#include <stdio.h>

int main() {
    
    int i;
    char userInput[100] = {'\0', };

    scanf("%s", &userInput);

    for(i = 0; i < strlen(userInput); i++){
        if(65 <= userInput[i] && userInput[i] <= 90){
            userInput[i] = userInput[i] + 32;
        }else if(97 <= userInput[i] && userInput[i] <= 122){
            userInput[i] = userInput[i] - 32;
        }
    }

    printf("%s", userInput);

    return 0;
}