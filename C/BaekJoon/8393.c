#include <stdio.h>

int main(void){

    int n1, sum = 0;
    scanf("%d", &n1);
    for(int i = 1; i <= n1; i++){
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}