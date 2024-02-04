#include <math.h>
#include <stdio.h>

int Function(int n1, int n2, int n3, int n4, int n5);

int main() {
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    Function(n1, n2, n3, n4, n5);
    return 0;
}

int Function(int n1, int n2, int n3, int n4, int n5){
    int result = 0;
    result = (pow(n1, 2) + pow(n2, 2) + pow(n3, 2) + pow(n4, 2) + pow(n5, 2));
    result = result % 10;
    printf("%d", result);
}