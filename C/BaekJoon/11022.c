#include <stdio.h>

int main(void){

    int caseCount, n1, n2;
    scanf("%d", &caseCount);

    for(int i = 1; i <= caseCount; i++){
        scanf("%d %d", &n1, &n2);
        printf("Case #%d: %d + %d = %d\n", i, n1, n2, n1 + n2);
    }
    return 0;
}