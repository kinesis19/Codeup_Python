#include <string.h>
#include <stdio.h>

int main() {

    char text[100] = { '\0', };
    scanf("%s", &text);

    printf("%d", strlen(text));

    return 0;
}