#include <stdio.h>

int main(){

    int num, i;

    do{
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        int tempResult = 0;
        for(i = 0; i < num; i++){
            tempResult = tempResult + (num - i);
        }
        printf("%d\n", tempResult);


    }while(num != 0);

    return 0;
}