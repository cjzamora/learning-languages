#include <stdio.h>

int main() {
    // print a variable using specifier in printf
    int num = 10;
    printf("Number: %d\n", num);
    printf("\n");

    // print with multiple variables
    int a = 10, b = 20;
    printf("a: %d, b: %d\n", a, b);
    printf("\n");

    // print with width specifier (padding with spaces)
    int x = 123456;
    printf("Printing x with width 10: \n");
    int chars_printed = printf("%10d\n", x);
    printf("Characters printed: %d\n", chars_printed);
    printf("\n");

    // using other method
    printf("Printing x with width 10 (other method): \n");
    chars_printed = printf("%*d\n", 10, x);
    printf("Characters printed: %d\n", chars_printed);
    printf("\n");

    // print with width specifier (padding with zeros)
    printf("Printing x with width 10 (zero-padded): \n");
    chars_printed = printf("%010d\n", x);
    printf("Characters printed: %d\n", chars_printed);
    printf("\n");

    // precision for integral types
    printf("Printing x with precision 5: \n");
    printf("%.5d\n", 1);
    printf("\n");

    // prcesion for floating point types
    printf("Printing pi with precision 3: \n");
    printf("%.3f\n", 3.14159);
    printf("\n");

    // for strings
    printf("Printing a string with precision 5: \n");
    printf("Hello, World! -> %.5s\n", "Hello, World!");
    printf("\n");
    
    return 0;
}