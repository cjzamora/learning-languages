#include <stdio.h>

int main() {
    /**
     * Some data types like char, short int takes less number of bytes than int,
     * these data types are automatically promoted to int or unsigned int when
     * an operation is performed on them.
     */

    /**
     * At first look , the expression (a * b) / c seems to cause overflow because
     * because signed char can hold values from -128 to 127, and the value of 
     * (a * b) = 1200 which is greater than 127. But integer promotion happens
     * here in arithmetic done on char types, and we get the appropriate result
     * without any overflow
     */
    char a = 30, b = 40, c = 10;
    char d = (a * b) / c;
    printf("Test integer promotion: d: %d\n", d);
    printf("\n");

    char e = 0xfb;
    unsigned char f = 0xfb;

    printf("Char e value: %c\n", e);
    printf("Unsigned char f value: %c\n", f);

    /**
     * Why e and f are not equal?
     * 
     * f is unsigned char, 0xfb in hex is 1111 1011 in binary
     * as an unsigned char, it is interpreted directly as 251 in decimal
     * 
     * e is signed char, 0xfb in hex is still 1111 1011 in binary
     * however, for a signed char, the MSB is used as the signed bit:
     *    - if MSB is 0, the number is positive
     *    - if MSB is 1, the number is negative (two's complement representation)
     * 
     * since MSB is 1, the number is negative, and the two's complement representation
     * will be used to get the decimal value of e:
     * 
     * 1. invert all bits: 0000 0100
     * // add 1 to (LSB) if LSB = 0, then it becomes 1, if LSB = 1,
     * // then it becomes 0 carry over to the next bit
     * 2. add 1: 0000 0100 + 1 = 0000 0101
     * 3. result in decimal: 5, but since the original number was negative,
     *    the result is -5
     * 
     * More example:
     * 
     * signed char 0xfa in hex is 1111 1010 in binary
     * it is a negative number, therefore we need to convert it using two's complement
     * 
     * 1. invert all bits: 0000 0101
     * // add 1 to (LSB) if LSB = 0, then it becomes 1, if LSB = 1,
     * // then it becomes 0 carry over to the next bit
     * 2. add 1: 0000 0101 + 1 = 0000 0110
     * 3. result in decimal: 6, but since the original number was negative,
     *    the result is -6
     * 
     * 1111 1010 in binary is 0xfa in hex
     * 0000 0101 in binary is 5 in decimal
     * 0000 0110 in binary is 6 in decimal
     */
    if (e == f) {
        printf("Char e and unsigned char f are equal\n");
    } else {
        printf("Char e and unsigned char f are not equal\n");
    }
    
    return 0;
}