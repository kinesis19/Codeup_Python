#include <math.h>
#include <stdio.h>

int Function(int A, int B);

int main() {
    long long n1, n2;
    scanf("%lld %lld", &n1, &n2);
    Function(n1, n2);
    return 0;
}

int Function(int A, int B){

    int result = 0;
    result = pow(A, 2) - pow(B, 2);
    printf("%lld", result);
}