#include <stdio.h>

int main(){
    int aryIn[28], aryStudents[30];
    int i;

    for(i = 0; i < 28; i++){
        scanf("%d", &aryIn[i]);
    }

    for(i = 0; i < 28; i++){
        aryStudents[aryIn[i] - 1] = aryIn[i];
        printf("%d\n", aryStudents[aryIn[i] - 1]);
        // if(aryStudents[aryIn[i] - 1] == 0){
        //     printf("%d", aryStudents[aryIn[i] - 1]);
        // }
    }

    return 0;
}