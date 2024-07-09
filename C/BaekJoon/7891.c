#include <stdio.h>

int main(){

    int num;
    int i;
    int numArr[101] = {0, };

    scanf("%d", &num);

    for(i = 0; i < num; i++){
        int tempNum1, tempNum2;
        scanf("%d %d", &tempNum1, &tempNum2);
        numArr[i] = tempNum1 + tempNum2;
    }


    for(i = 0; i < num; i++){
        printf("%d\n", numArr[i]);
    }

    return 0;
}