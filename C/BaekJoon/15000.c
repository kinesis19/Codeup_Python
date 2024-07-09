#include <stdio.h>

int main(){

    char text[1000000] = {'\0', };
    int i;

    scanf("%s", &text);

    for(i = 0; text[i] != '\0'; i++){
        printf("%c", text[i] - 32);
    }

    return 0;
}