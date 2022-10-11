#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {
    char *str = malloc(sizeof(char));
    char s;
    int i = 0;

    while ((s = getchar()) != '\n') {
        str[i++] = s;
        str = realloc(str, sizeof(*str) + sizeof(char));
    }

    printf("Hello, %s!\n", str);
    free(str);
    return 0;
}