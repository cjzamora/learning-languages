#include <stdio.h>

int main() {
    int x = 10, results;

    // unary operator - (minus)
    results = -x;
    printf("Unary operator -x is: %d\n", results);

    // unary operator + (plus)
    results = +x;
    printf("Unary operator +x is: %d\n", results);

    // unary operator ++ (pre-increment)
    results = ++x;
    printf("Pre-increment of x is: %d\n", results);

    // unary operator -- (pre-decrement)
    results = --x;
    printf("Pre-decrement of x is: %d\n", results);

    // unary operator ++ (post-increment)
    // can be thought of as:
    // results = x;
    // x = x + 1;
    results = x++;
    printf("Post-increment of x is: %d\n", results);

    // unary operator -- (post-decrement)
    // can be thought of as:
    // results = x;
    // x = x - 1;
    results = x--;
    printf("Post-decrement of x is: %d\n", results);

    // ! operator
    results = !x;
    printf("Logical NOT of x is: %d\n", results);

    // & operator
    int* z = &x;
    printf("Address of x is: %p\n", z);

    // * operator
    printf("Value at address of x is: %d\n", *z);

    // sizeof operator
    int size = sizeof(x);
    printf("Size of x is: %d\n", size);

    return 0;
}