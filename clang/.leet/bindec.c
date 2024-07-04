#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * Converts the given binary string to decimal.
 * Using the regular formula or method.
 * 
 * bit x pow(2, index)
 * 
 * @param bin the binary string
 * @return the decimal number
 */
int bindec(char* bin) {
    int dec = 0, len = strlen(bin);

    // loop through bits by length
    for(int i = 0; i <= len - 1; i ++) {
        // get each bit in reverse order
        int bit = bin[(len - 1) - i] - '0';
        // add the power of 2 to the bit
        // equivalent to (dec << 1) + bit
        dec += bit * pow(2, i);
    }

    return dec;
}

/**
 * Converts the given binary string to decimal.
 * Using the bitwise operators.
 * 
 * dec = (dec << 1) + bit
 * 
 * @param bin the binary string
 * @return the decimal number
 */
int bindec_bw(char* bin) {
    int dec = 0, len = strlen(bin);

    // loop through bits by length
    for(int i = 0; i <= len - 1; i ++) {
        // this is kinda weird, but it works
        // so what this basically does is it 
        // subtracts the ASCII value of '0' from
        // the ASCII value of the binary number
        //
        // ex: 
        // 7 = 55 ascii
        // 0 = 48 ascii
        // 55 - 48 = 7 (actual number)
        //
        // on the other hand, if we add '0' to the
        // binary number, it will convert it to its
        // ASCII value
        //
        // ex:
        // 56 + '0' = 56 + 48 = 104 ascii (letter 'h' in ASCII)
        int bit = bin[i] - '0';

        // what happends here?
        // we shift the decimal number to the left
        // by 1, then add the bit to it
        // 
        // if binary is:
        // 0000 0101
        //
        // 1. 0 << 1 = 0 + 0 = 0
        // 2. 0 << 1 = 0 + 0 = 0
        // 3. 0 << 1 = 0 + 0 = 0
        // 4. 0 << 1 = 0 + 0 = 0
        // 5. 0 << 1 = 0 + 0 = 0
        // 6. 0 << 1 = 0 + 1 = 1
        // 7. 1 << 1 = 2 + 0 = 2
        // 8. 2 << 1 = 4 + 1 = 5
        //
        // result: 5
        // 
        // then why add the bit?
        // so we can determine if the resulting
        // number is odd or even.
        dec = (dec << 1) + bit;
    }

    return dec;
}

int main() {
    // 8-bits + null terminator
    char bin[9];

    printf("Binary to Decimal\n");
    printf("Enter an 8-bit binary: ");

    // get the binary number from the user
    scanf("%s", bin);

    // if user entered more than 8-bits
    // throw an error
    if (bin[8] != '\0') {
        printf("Please enter an 8-bit binary\n");
        return 1;
    }

    // print the binary format
    printf("bindec(): %d\n", bindec(bin));
    // print the decimal format
    printf("bindec_bw(): %d\n", bindec_bw(bin));

    return 0;
}