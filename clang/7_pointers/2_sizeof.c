#include <stdio.h>

struct str {};

void func(int a, int b) {}

int main() {
    int a = 10;
    char c = 'b';
    struct str x;

    int *a_ptr = &a;
    char *c_ptr = &c;
    struct str *x_ptr = &x;
    void (*func_ptr)(int, int) = func;
    void *ptr_vn = NULL;

    printf("Size of integer pointer: %lu bytes\n", sizeof(a_ptr));
    printf("Size of char pointer: %lu bytes\n", sizeof(c_ptr));
    printf("Size of struct pointer: %lu bytes\n", sizeof(x_ptr));
    printf("Size of function pointer: %lu bytes\n", sizeof(func_ptr));
    printf("Size of void/null pointer: %lu bytes\n", sizeof(ptr_vn));
    
    return 0;
}