#include <stdio.h>

int main(){

    int numArr[100] = {0, };
    int num1, num2, tempNum1, tempNum2;
    int i;


    scanf("%d %d", &num1, &num2);

    
    for(i = 0; i < num1; i++){
        numArr[i] = i + 1;
    }

    for(i = 0; i < num2; i++){
        scanf("%d %d", &tempNum1, &tempNum2);

        int tempSwap = numArr[tempNum1-1];
        numArr[tempNum1-1] = numArr[tempNum2-1];
        numArr[tempNum2-1] = tempSwap;
    }

    for(i = 0; i < num1; i++){
        printf("%d ", numArr[i]);
    }

    return 0;
}