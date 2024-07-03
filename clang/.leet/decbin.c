#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Decimal to binary conversion without
 * using the bitwise operators.
 * 
 * @param num the number to convert
 * @return the binary format of the number
 */
char* decbin(int num) {
    // quotient
    int quot = num;
    // get type size
    int size_t = 16;
    // get the final size + spaces + null terminator
    int size = 16 + (size_t / 4);
    // create a char buffer to store the binary format
    // + 1 for the null terminator
    // + n for spaces
    char* buffer = (char*) malloc(size);

    // get the remainder until 0
    int index = size - 1;
    while(index >= 0) {
        // add null terminator
        if (index == size - 1) {
            buffer[index--] = '\0';
            continue;
        }

        // add spaces every 4 bits
        if (index % 5 == 4) {
            buffer[index--] = ' ';
        } else {
            // get the remainder
            int rem = quot % 2;
            // store the remainder in the buffer
            buffer[index--] = rem + '0';
            // get the quotient
            quot = quot / 2;
        }
    }

    return buffer;
}

/**
 * Decimal to binary conversion using
 * the bitwise operators.
 * 
 * @param num the number to convert
 * @return the binary format of the number
 */
char* decbin_bw(int num) {
    // get the size of the integer
    // int size = sizeof(num) * 8;
    int size_t = 16;
    // get the final size + spaces + null terminator
    int size = size_t + (size_t / 4);

    // create a char buffer to store the binary format
    // + 1 for the null terminator
    // + n for spaces
    char* buffer = (char*) malloc(size);

    // save bit position
    int cursor = 0;
    // iterate through the size of the integer
    for(int i = size - 1; i >= 0; i --) {
        // add null terminator
        if (i == size - 1) {
            buffer[i] = '\0';
            continue;
        }

        // add spaces every 4 bits
        if (i % 5 == 4) {
            buffer[i] = ' ';
        } else {
            // get the bit at the n-th position by using
            // the right shift operator, then mask it to 1
            // using the bitwise AND operator, by doing so
            // it will make every bits to 0 except the last bit
            // the result will be 1 if the last bit is 1 otherwise 0
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

    // print the binary format
    char* bin = decbin(num);
    printf("decbin(): %s\n", bin);

    // free up the memory
    free(bin);

    // print the binary format
    bin = decbin_bw(num);
    printf("decbin_bw(): %s\n", bin);

    // free up the memory
    free(bin);

    return 0;
}