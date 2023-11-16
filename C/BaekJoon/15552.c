#include <stdio.h>

int main(void){

    int caseCount, n1, n2;
    scanf("%d", &caseCount);
    while(caseCount--){
        scanf("%d %d", &n1, &n2);
        printf("%d\n", n1 + n2);
    }
    return 0;
}