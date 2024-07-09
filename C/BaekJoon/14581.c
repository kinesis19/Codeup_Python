#include <stdio.h>

int main(){

    int id[20] = {'\0'};

    scanf("%s", &id);

    printf("%s%s%s\n", ":fan:", ":fan:", ":fan:");
    printf("%s%s%s\n", ":fan::", id, "::fan:");
    printf("%s%s%s\n", ":fan:", ":fan:", ":fan:");


    return 0;
}