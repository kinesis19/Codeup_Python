#include <stdio.h>

int main(void){

    int n1;
    scanf("%d", &n1);

    for(int i = 0; i < n1; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}