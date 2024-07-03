#include <stdio.h>
#include <math.h>

/**
 * Sum two integers.
 * 
 * @param a the first integer
 * @param b the second integer
 * @return the sum of the two integers
 */
int sum(int a, int b) {
    return a + b;
}

/**
 * Example of pass-by-value.
 * 
 * @param a the first integer
 * @param b the second integer
 * 
 * @note This function will not swap the values of a and b.
 */
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_ref(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // basics
    printf("Test sum(): %d\n", sum(1, 2)); // 3
    printf("\n");

    // linrary functions
    printf("Test pow(): %f\n", pow(2, 3)); // 8.000000
    printf("\n");

    // pass-by-value
    int a = 1, b = 2;
    printf("Test pass-by-value swap():\n");
    printf("Before swap: a = %d, b = %d\n", a, b); // 1, 2
    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b); // 1, 2
    printf("\n");

    // pass-by-reference
    printf("Test pass-by-reference swap_ref():\n");
    printf("Before swap: a = %d, b = %d\n", a, b); // 1, 2
    swap_ref(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b); // 2, 1

    return 0;
}