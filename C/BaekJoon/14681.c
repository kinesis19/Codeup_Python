#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf(n1>0 ? (n2>0 ? "1" : "4") : "");
    printf(n1<0 ? (n2<0 ? "3" : "2") : "");
    return 0;
}