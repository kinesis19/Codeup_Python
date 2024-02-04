#include <string.h>
#include <stdio.h>

int main() {

    int select;
    char text[1000] = { '\0', };
    scanf("%s", &text);
    scanf("%d", &select);

    printf("%c", text[select - 1]);

    return 0;
}