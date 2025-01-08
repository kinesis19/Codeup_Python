#include <stdio.h>

int main () {

    int visitorCnt = 0;
    int seatAry[101] = {0, };
    int denyCnt = 0;

    scanf("%d", &visitorCnt);

    for (int i = 0; i < visitorCnt; i++) {
        int num;
        scanf("%d", &num);
        
        // 자리가 비어 있지 않을 경우
        if (seatAry[num - 1] != 0) {
            denyCnt++;
        } else {
            seatAry[num - 1] = 1;
        }
    }

    printf("%d", denyCnt);

    return 0;
}