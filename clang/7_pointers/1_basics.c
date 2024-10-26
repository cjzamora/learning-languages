#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int a = 10;
    // pointer to the address of a
    int *p = &a;

    printf("Address of a from p: %p\n", p);
    printf("Value of a from *p: %d\n", *p);
    printf("Address of p: %p\n", &p);
    printf("\n");

    int x = 20;
    int *xp = &x;
    printf("Integer pointer x: %d\n", *xp);

    char c[3] = {'a', 'b', 'c'};
    // why c instead of &c?
    // c is already a pointer to the first element of the array
    // while &c is the address of the array
    char *cp = c;
    printf("Char pointer c: %c\n", *cp);

    struct Point {
        int x;
        int y;
    };

    struct Point pt = {10, 20};
    struct Point *ptp = &pt;
    printf("Struct pointer pt: %d\n", ptp->x);

    int (*f)(int) = square;
    printf("Function pointer square: %d\n", f(10));
    printf("\n");

    // pointer to a pointer
    // * - get the address in the inner level of the pointer
    // ** - get the value pointed by the inner level of the pointer
    // *pp - address of a
    // pp - address of p
    // &pp - address of pp
    int **pp = &p;
    printf("Address of a from *pp: %p\n", *pp);
    printf("Address of p from pp: %p\n", pp);
    printf("Address of pp: %p\n", &pp);
    printf("Value of a from **pp: %d\n", **pp);
    printf("\n");

    // null pointer
    int *np = NULL;
    printf("Null pointer: %p\n", np);
    
    // void pointer
    // void pointer can point to any data type
    // but it cannot be dereferenced
    void *vp = &a;
    printf("Void pointer: %p\n", vp);

    // const pointer
    // const pointer cannot be changed
    const int b = 20;
    const int *cp1 = &b;
    // *cp1 = 30; // error: read-only variable is not assignable
    printf("Const pointer: %d\n", *cp1);

    return 0;
}