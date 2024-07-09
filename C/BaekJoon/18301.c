#include <stdio.h>

int main(){

    int num1, num2, num3;
    int result = 0;

    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 + 1) * (num2 + 1) / (num3 + 1) - 1;

    printf("%d", result);

    return 0;
}