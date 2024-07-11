#include <stdio.h>

int main() {
    int a = 10;
    // pointer to the address of a
    int *p = &a;

    printf("Address of a from p: %p\n", p);
    printf("Value of a from *p: %d\n", *p);
    printf("Address of p: %p\n", &p);
    return 0;
}