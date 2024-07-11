#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("p = %p\n", p);
    // +4 bytes (size of int)
    p++;
    printf("p++ = %p\n", p);
    // -4 bytes (size of int)
    p--;
    printf("p-- = %p", p);

    // pointer addition
    // +20 bytes (5 * size of int)
    p = p + 5;
    printf("p + 5 = %p\n", p);
    return 0;
}