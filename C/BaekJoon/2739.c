#include <stdio.h>

int main(void){

    int n1;
    scanf("%d", &n1);
    for(int i=0;i<9;i++){
        printf("%d * %d = %d\n", n1, i+1, n1*(i+1));
    }

    return 0;
}