#include <stdio.h>

int main(){

    char text[3] = {'\0', };
    int i;
    scanf("%s", &text);
    for(i = 0; i < 3; i++){
        printf("%c", text[2-i]);
    }

    return 0;
}