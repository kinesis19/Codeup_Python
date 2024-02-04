#include <stdio.h>

int main() {
    
    int N, M;
    int i, j;
    scanf("%d %d", &N, &M);

    int aryA[N][M];
    int aryB[N][M];

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &aryA[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            scanf("%d", &aryB[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            printf("%d ", aryA[i][j] + aryB[i][j]);
        }
        printf("\n");
    }


    return 0;
}