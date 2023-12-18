#include <stdio.h>

int main(){

    int ary[10000] = {0, };
    int inputLength, inputKey;
    scanf("%d %d", &inputLength, &inputKey);

    for(int i = 0; i < inputLength; i++){
        scanf("%d", &ary[i]);
    }

    for(int i = 0; i < inputLength; i++){
        if(ary[i] < inputKey){
            printf("%d ", ary[i]);
        }
    }

    return 0;
}

