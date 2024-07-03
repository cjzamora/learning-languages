#include <stdio.h>

// a function prototype
int sum(int a, int b);

int main() {
    printf("Test sum(): %d\n", sum(1, 2)); // 3
    return 0;
}

// a function definition
int sum(int a, int b) {
    return a + b;
}