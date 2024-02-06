#include <stdio.h>

int main() {
    int i, sum = 0, n1;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &n1);
        sum = sum + n1;
    }
    printf("%d", sum);

    return 0;
}
