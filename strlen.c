#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while ((*ptr++ = *src++));
    return dest;
}

int main() {
    char dest[50];
    const char *src = "Hello, World!";
    my_strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}