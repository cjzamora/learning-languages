#include <stdio.h>
#include <stdarg.h>

int add_numbers(int size, ...) {
    int sum = 0;

    // declare pointer to the argument list
    va_list args;

    // initialize the argument list
    va_start(args, size);

    for(int i = 0; i < size; i++) {
        // access the next argument in the list
        sum += va_arg(args, int);
    }

    // clean up the argument list
    va_end(args);

    return sum;
}

int main() {
    printf("Test variadic functions:\n");
    printf("Sum using add_numbers(size, ...): %d\n", add_numbers(3, 1, 2, 3)); // 6
    
    return 0;
}