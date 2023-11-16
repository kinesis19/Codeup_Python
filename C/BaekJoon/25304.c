#include <stdio.h>

int main(void){

    int totalMuch, typeCount, much, itemCount, sum = 0;
    scanf("%d %d", &totalMuch, &typeCount);
    for(int i = 0; i < typeCount; i++){
        scanf("%d %d", &much, &itemCount);    
        sum = sum + (much * itemCount);
    }
    printf(sum == totalMuch ? "Yes" : "No");

    return 0;
}