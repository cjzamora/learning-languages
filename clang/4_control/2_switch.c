#include <stdio.h>

int main() {
    int num = 20;

    printf("Test switch statement:\n");
    switch(num) {
        case 10:
            printf("Num is 10\n");
            break;
        case 20:
            printf("Num is 20\n");
            break;
        case 30:
            printf("Num is 30\n");
            break;
        default:
            printf("Num is not 10, 20, or 30\n");
    }

    printf("\n");
    printf("Test switch statement with range:\n");

    int score = 91;
    switch(score) {
        case 91 ... 100:
            printf("Score %d is A+\n", score);
            break;
        case 81 ... 90:
            printf("Score %d is A\n", score);
            break;
        case 71 ... 80:
            printf("Score %d is B\n", score);
            break;
        case 61 ... 70:
            printf("Score %d is C\n", score);
            break;
        case 51 ... 60:
            printf("Score %d is D\n", score);
            break;
        default:
            printf("Score %d is F\n", score);
    }
    
    return 0;
}