#include <stdio.h>
#include <stdlib.h>

/**
 * Decimal to binary conversion
 * 
 * @param num decimal number
 * 
 * @return character string
 */
char* decbin(int num) {
    int size_t = 8;
    int size = size_t + (size_t / 4);
    char* buffer = (char*) malloc(size);

    int cursor = 0;
    for(int i = size - 1; i >= 0; i --) {
        if (i == size - 1) {
            buffer[i] = '\0';
            continue;
        }

        if (i % 5 == 4) {
            buffer[i] = ' ';
        } else {
            int bit = (num >> cursor++) & 1;
            buffer[i] = bit + '0';
        }
    }

    return buffer;
}

/**
 * Simple sleep function in ms.
 * 
 * @param ms sleep in milliseconds
 * 
 * @return void
 */
void sleep(int ms) {
    for(int i = 0; i < ms; i++) {
        for(int j = 0; j < 1000000; j++) {
            // do nothing
        }
    }
}

/**
 * Simple clear screen function.
 * 
 * @return void
 */
void clrscr() {
    printf("\033[H\033[J");
}

/**
 * This program shows how binary counter works.
 * We can also visualize here how binary numbers
 * flip it's bits from 0 to 1 every time the right
 * most bit reaches 1.
 * 
 * ex:
 * 00000000
 * 00000001 -> next bit flips after this
 * 00000010 -> flipped!
 * 00000011 -> third bit will flip after this
 * 00000100 -> flipped!
 * 
 * @return int
 */
int main() {
    // start number
    int num = 0;
    // max number
    int max = 255;

    // clear the screen
    clrscr();

    // while num <= max
    while(num <= max) {
        // clear the screen
        clrscr();

        // convert decimal to binary
        char* bin = decbin(num);
        printf("%s     %d\n", bin, num);

        // sleep
        sleep(1000);

        // free-up memory
        free(bin);
        num++;
    }

    return 0;
}