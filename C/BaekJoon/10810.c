#include <stdio.h>

int main(){
    int ary[100] = {0, };
    int N, M;
    int a, b;
    int i, j, k;
    scanf("%d %d", &N, &M);

    for(a = 0; a < M; a++){
        scanf("%d %d %d", &i, &j, &k);
        for(b = i; b <= j;b++){
            ary[b-1] = k;
        }
}


    for(a = 0; a < N; a++){
        printf("%d ", ary[a]);
    }
    return 0;
}