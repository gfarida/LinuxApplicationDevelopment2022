#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int main(int argc, char** argv) {
    char *str = malloc(sizeof(char));
    char s;
    int i = 0;

    while ((s = getchar()) != '\n') {
        str[i++] = s;
        str = realloc(str, strlen(str) + sizeof(char));
    }

    printf("Hello, %s!\n", str);
    free(str);
    return 0;
}