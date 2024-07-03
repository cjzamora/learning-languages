#include <stdio.h>

int main() {
    printf("Test for loop:\n");
    for(int i = 0; i < 5; i++) {
        printf("for i: %d\n", i);
    }

    printf("\n");
    printf("Test while loop:\n");

    int i = 0;
    while(i < 5) {
        printf("while i: %d\n", i);
        i++;
    }

    printf("\n");
    printf("Test do/while loop:\n");

    i = 0;
    do {
        printf("do/while i: %d\n", i);
        i++;
    } while(i < 5);

    printf("\n");
    printf("Test break statement:\n");
    for(int i = 0; i < 5; i++) {
        if (i == 3) {
            printf("break i: %d\n", i);
            break;
        }
    }

    printf("\n");
    printf("Test continue statement:\n");
    for(int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("continue i: %d\n", i);
            continue;
        }
    }

    return 0;
}