#include <stdio.h>

int main() {
    int num = 6;

    printf("Test if/else statement odd/event check:\n");
    if (num % 2 == 0) {
        printf("Num %d is even\n", num);
    } else {
        printf("Num %d is odd\n", num);
    }

    printf("\n");
    printf("Test if/else prime number check:\n");

    int is_prime = 0;
    for(int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 1;
            break;
        }
    }

    if (is_prime == 0) {
        printf("Num %d is a prime number\n", num);
    } else {
        printf("Num %d is not a prime number\n", num);
    }

    printf("\n");
    printf("Test if/else if/else grade check:\n");

    int score = 85;
    if (score >= 90) {
        printf("Score %d is A\n", score);
    } else if (score >= 80) {
        printf("Score %d is B\n", score);
    } else if (score >= 70) {
        printf("Score %d is C\n", score);
    } else if (score >= 60) {
        printf("Score %d is D\n", score);
    } else {
        printf("Score %d is F\n", score);
    }

    return 0;
}