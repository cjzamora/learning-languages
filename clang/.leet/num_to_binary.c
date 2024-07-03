#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * A function that returns a binary string format
 * of a given integer.
 */
char* to_binary(int num) {
    // get the size of the integer
    // int size = sizeof(num) * 8;
    int size_t = 16;
    // get the final size + spaces + null terminator
    int size = size_t + (size_t / 4);

    // create a char buffer to store the binary format
    // + 1 for the null terminator
    // + n for spaces
    char* buffer = (char*) malloc(size);

    // loop through size
    int cursor = 0;
    for(int i = size - 1; i >= 0; i --) {
        // add null terminator
        if (i == size - 1) {
            buffer[i] = '\0';
            continue;
        }

        // add spaces for every after 4 bits
        if (i % 5 == 4) {
            buffer[i] = ' ';
        } else {
            // get the bit at the n-th position by using
            // the right shift operator, then mask it to 1
            // using the bitwise AND operator, by doing so
            // it will cause every bits to 0 except the last bit
            // the result will be 1 if the last bit is 1 and 0 if 0
            // 
            // ex: 5 = 0000 0101
            // 1. 5 >> 0 = 0000 0101 & 0000 0001 = 0000 0001 = 1
            // 2. 5 >> 1 = 0000 0010 & 0000 0001 = 0000 0000 = 0
            // 3. 5 >> 2 = 0000 0001 & 0000 0001 = 0000 0001 = 1
            // 4. 5 >> 3 = 0000 0000 & 0000 0001 = 0000 0000 = 0
            // 
            // 5. 5 >> 4 = 0000 0000 & 0000 0001 = 0000 0000 = 0
            // 6. 5 >> 5 = 0000 0000 & 0000 0001 = 0000 0000 = 0
            // 7. 5 >> 6 = 0000 0000 & 0000 0001 = 0000 0000 = 0
            // 8. 5 >> 7 = 0000 0000 & 0000 0001 = 0000 0000 = 0
            // ...
            int bit = (num >> cursor++) & 1;
            // store the bit in the buffer
            buffer[i] = bit + '0';
        }
    }

    return buffer;
}

int main() {
    int num;

    printf("Number to Binary\n");
    printf("Enter a number: ");

    // get the number from the user
    scanf("%d", &num);
    printf("\n");

    // convert the number to binary
    char* binary = to_binary(num);
    // print the binary format
    printf("%s\n", binary);

    return 0;
}