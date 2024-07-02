#include <stdio.h>

int main() {
    // implicit type conversion
    int a = 10;
    char b = 'a';

    // y implicitly converted to int, ASCII value of 'a' is 97
    // therefore 97 + 10 = 107
    a = a + b;

    // x is implicitly converted to float
    float c = a + 1.0;

    printf("Test implicit conversion: a: %d, b: %c, c: %f\n", a, b, c);
    printf("\n");

    // explicit type conversion
    double d = 3.14;
    // explicit type conversion from double to int
    int e = (int) d + 1;

    printf("Test explicit conversion: d: %f, e: %d\n", d, e);
    printf("\n");

    return 0;
}