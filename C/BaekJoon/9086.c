#include <string.h>
#include <stdio.h>

int main() {

    int n1, i;
    char text[1000] = { '\0', };

    scanf("%d", &n1);
    
    for (i = 0; i < n1; i++) {
        scanf("%s", &text);
        printf("%c%c\n", text[0], text[strlen(text) - 1]);
    }

    return 0;
}