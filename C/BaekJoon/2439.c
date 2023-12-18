#include <stdio.h>

int main(void){

    int n1;
    scanf("%d", &n1);

    for(int i = 0; i < n1; i++){
        int j = 0;
        for(j = 0; j < n1-i-1; j++){
            printf(" ");
        }
        for(int k = 0; k < n1-j; k++){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
