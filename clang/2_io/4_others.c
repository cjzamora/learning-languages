#include <stdio.h>

int main() {
    char str[100];
    int a = 10, b = 20;

    // sprintf - write formatted output to a string
    sprintf(str, "a: %d, b: %d", a, b);
    printf("String after sprintf: %s\n", str);
    printf("\n");

    // sscanf - read formatted input from a string
    int x, y;
    sscanf(str, "a: %d, b: %d", &x, &y);
    printf("Value from sscanf: x: %d, y: %d\n", x, y);
    printf("\n");
    
    return 0;
}