#include <stdio.h>

int main(void){

    int max, n1, n2;
    scanf("%d", &max);
    for(int i = 0; i < max; i++){
        scanf("%d %d", &n1, &n2);
        printf("%d\n", n1+n2);
    }

    return 0;
}