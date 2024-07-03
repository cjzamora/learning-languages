#include <stdio.h>

/**
 * Function that checks if a number is even or odd
 * and prints the result using goto statements.
 * 
 * @param num the number to check
 * @return void
 */
void isEvenOrOdd(int num) {
    if (num % 2 == 0) {
        goto even;
    } else {
        goto odd;
    }

even:
    printf("Num %d is even\n", num);
    return;
odd: 
    printf("Num %d is odd\n", num);
    return;
}

int main() {
    int num[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        isEvenOrOdd(num[i]);
    }

    return 0;
}