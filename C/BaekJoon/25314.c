#include <stdio.h>

int main(void){

    int n1;
    scanf("%d", &n1);
    for(int i = 0; i < n1/4; i++){
        printf("long ");
    }
    printf("int");

    return 0;
}