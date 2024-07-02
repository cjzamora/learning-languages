
#include <stdio.h>

int main() {
    int x = 10, y = 5, results;

    printf("Value of x and y is: %d and %d\n", x, y);

    // + operator
    results = x + y;
    printf("Sum of x + y is: %d\n", results);

    // - operator
    results = x - y;
    printf("Difference of x - y is: %d\n", results);

    // * operator
    results = x * y;
    printf("Product of x * y is: %d\n", results);

    // / operator
    results = x / y;
    printf("Division of x / y is: %d\n", results);

    // % operator
    results = x % y;
    printf("Modulus of x %% y is: %d\n", results);

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

    return 0;
}