#include <stdio.h>

int main() {
    char ary[101] = {'\0', };

    while(gets(ary) != NULL){
        printf("%s\n", ary);
    }

    return 0;
}