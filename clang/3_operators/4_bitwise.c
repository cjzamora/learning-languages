#include <stdio.h>

int main() {
    // 0000 0001
    int x = 1;
    // 0000 0010
    int y = 2;

    // bitwise AND operator
    // this operator compares the bits of two numbers
    // if both bits are 1, the result is 1
    // otherwise, the result is 0
    //   0000 0001 
    // & 0000 0010 
    // = 0000 0000
    printf("Bitwise AND operator: %d\n", x & y); // 0

    // bitwise OR operator
    // this operator compares the bits of two numbers
    // if either bit is 1, the result is 1
    // otherwise, the result is 0
    //   0000 0001
    // | 0000 0010
    // = 0000 0011
    printf("Bitwise OR operator: %d\n", x | y); // 3

    // bitwise XOR operator
    // this operator compares the bits of two numbers
    // if the bits are different, the result is 1
    // otherwise, the result is 0
    //   0000 0001
    // ^ 0000 0010
    // = 0000 0011
    printf("Bitwise XOR operator: %d\n", x ^ y); // 3

    // bitwise NOT operator
    // this operator inverts the bits of a number
    //   0000 0001
    // = 1111 1110
    printf("Bitwise NOT operator: %d\n", ~x); // -2

    // bitwise left shift operator
    // this operator shifts the bits of a number to the left
    //    0000 0001
    // << 1
    // =  0000 0010
    printf("Bitwise left shift operator: %d\n", x << 1); // 2

    // bitwise right shift operator
    // this operator shifts the bits of a number to the right
    //    0000 0001
    // >> 1
    // =  0000 0000
    printf("Bitwise right shift operator: %d\n", x >> 1); // 0
    return 0;
}