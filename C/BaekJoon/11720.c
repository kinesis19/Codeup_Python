#include <stdio.h>

int main() {

    int n1, i, sum = 0;
    char text[100] = { 0, };
    scanf("%d", &n1);

    scanf("%s", &text);

    for (i = 0; i < n1; i++) {
        sum = sum + ((int)text[i] - 48);
    }

    printf("%d", sum);

    return 0;
}