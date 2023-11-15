#include <stdio.h>

int main(){
    int h, m, temp;
    scanf("%d %d", &h, &m);
    if(m-45 > 0){
        printf("%d %d", h, m-45);
    }else if(m-45 < 0){
        temp = 60 + (m-45);
        if(h-1 >= 0){
            printf("%d %d", h-1, temp);
        }else if(h - 1 < 0){
            printf("23 %d", temp);
        }
    }else if(m-45 == 0){
        if(h-1 >= 0){
            printf("%d 0", h);
        }else if(h - 1 < 0){
            printf("0 0");
        }
    }
    return 0;
}