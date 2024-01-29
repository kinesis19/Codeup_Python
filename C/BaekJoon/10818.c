#include <stdio.h>
int main(){

    int N = 0, minValue = 1000000, maxValue = -1000000;
    scanf("%d", &N);
    int ary[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &ary[i]);
    }
    for(int i = 0; i < N; i++){
        if(ary[i] < minValue){
            minValue = ary[i];
        }
        if(ary[i] > maxValue){
            maxValue = ary[i];
        }
    }

    printf("%d %d", minValue, maxValue);


    return 0;
}