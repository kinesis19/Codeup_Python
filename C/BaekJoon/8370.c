#include <stdio.h>

int main(){

    int businessClass, economicClass;
    int bClassCnt, eClassCnt;
    int result = 0;
    scanf("%d %d %d %d", &businessClass, &bClassCnt, &economicClass, &eClassCnt);
    
    result = (businessClass * bClassCnt) + (economicClass * eClassCnt);

    printf("%d", result);

    return 0;
}