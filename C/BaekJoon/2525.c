#include <stdio.h>

int main(){
    int h, m, needTime, temp;
    scanf("%d %d %d", &h, &m, &needTime);
    while(needTime >= 60){
        needTime = needTime - 60;
        h = h + 1;
    }
    
    if(needTime + m >= 60){
        h = h + 1;
        m = (needTime + m - 60);
    }else{
        m = needTime + m;
    }

    if(h >= 24){
        h = h-24;
    }

    printf("%d %d", h, m);
    return 0;
}