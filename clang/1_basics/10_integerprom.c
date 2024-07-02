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
     * signed char is (8-bit) 1000 0000 to 0111 1111 (-128 to 127)
     * unsigned char is (8-bit) 0000 0000 to 1111 1111 (0 to 255)
     * 
     * 0xfb = 1111 1011 in binary and 251 in decimal
     * as signed char the MSB will determine wheter it's negative or positive.
     * 
     * if MSB = 1, then it's negative
     * if MSB = 0, then it's positive
     * 
     * to find it's value when it's negative, we use two's complement method
     * 
     * 0xfb = 1111 1011 (MSB is 1, so it's negative)
     * // invert the bits
     * 0x04 = 0000 0100
     * // add 1 to LSB
     * // - if LSB is 0, then it becomes 1
     * // - if LSB is 1, then it becomes 0 and carry over to the next bit
     * 0x05 = 0000 0101
     * // convert to decimal
     * 0x05 = 5 since MSB is 1, it's negative
     * // final value
     * -5
     * 
     * Another example: 
     * 
     * 0x80 = 1000 0000 in binary and 128 in decimal
     * 0x80 = 1000 0000 (MSB is 1, so it's negative)
     * // invert the bits
     * 0x7f = 0111 1111
     * // add 1 to LSB
     * 0x80 = 1000 0000 (0111 1111 + 0000 0001 = 1000 0000)
     * // convert to decimal
     * 0x80 = 128 since MSB is 1, it's negative
     * // final value
     * -128
     */
    if (e == f) {
        printf("Char e and unsigned char f are equal\n");
    } else {
        printf("Char e and unsigned char f are not equal\n");
    }

    unsigned int x = -9;
    printf("Unsigned int x: %u\n", x);

    printf("%d\n", 0b01111111);
}