#include <stdio.h>

int main(){
    int ary[9];
    int i, maxIndex = 0;
    int max = 0;

    for(i = 0; i < 9; i++){
        scanf("%d", &ary[i]);
    }
    for(i = 0; i < 9; i++){
        if(ary[i] > max){
            max = ary[i];
            maxIndex = i + 1;
        }
    }
    printf("%d\n%d", max, maxIndex);
    return 0;
}