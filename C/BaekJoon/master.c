#include <string.h>
#include <stdio.h>

int main(void){

    int i;
    char text[10] = {'\0', };

    printf("���ڿ� �Է� : ");
    scanf("%s", &text);

    for(i = 0; i <= strlen(text); i++){
        printf("%c", text[strlen(text)-i]);
    }

    return 0;
}