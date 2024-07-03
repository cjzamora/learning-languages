#include <stdio.h>

/**
 * This file demonstrates the ways on how
 * to return multiple values from a function
 */

/**
 * This function shows how to return multiple 
 * values from a function using pointers.
 */
void sum_diff_a(int a, int b, int* sum, int* diff) {
    *sum = a + b;
    *diff = a - b;
}

// define a struct to store the sum and diff
struct SumDiffStruct {
    int sum;
    int diff;
};

// define a type for the struct
typedef struct SumDiffStruct SumDiff;

/**
 * This function shows how to return multiple
 * values from a function using struct.
 */
SumDiff sum_diff_b(int a, int b) {
    SumDiff sd;

    sd.sum = a + b;
    sd.diff = a - b;

    return sd;
}

int main() {
    int sum, diff;
    printf("Test return multiple values using pointers:\n");
    sum_diff_a(1, 2, &sum, &diff);
    printf("Sum: %d, Diff: %d\n", sum, diff); // 3, -1
    printf("\n");

    printf("Test return multiple values using struct:\n");
    SumDiff sd = sum_diff_b(1, 2);
    printf("Sum: %d, Diff: %d\n", sd.sum, sd.diff); // 3, -1
    printf("\n");

    return 0;
}