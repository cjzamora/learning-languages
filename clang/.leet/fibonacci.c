#include <stdio.h>

/**
 * Fibonacci sequence
 * 
 * Is a sequence of numbers in which each number 
 * is the sum of the two preceding ones, usually 
 * starting with 0 and 1.
 */
int main() {
    int first = 0;
    int second = 1;
    int next = 0;

    // generate the first 10 numbers of the sequence
    for(int i = 0; i < 10; i++) {
        // print the first number
        printf("%d\n", first);

        // calculate the sum if preceding
        // first and second numbers
        next = first + second;
        // move the first number to second number
        // ex: from 0 -> 1, 1 -> 1, 1 -> 2
        first = second;
        // move the second number to the sum of 
        // current first and second numbers
        // ex: from 1 -> 1, 2 -> 3, 3 -> 5
        second = next;
    }

    return 0;
}