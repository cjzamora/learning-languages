#include <stdio.h>

int main() {
    int x = 10;

    // basic = operator
    x = 20;
    printf("Basic assignment operator: x = 20 is: %d\n", x);

    // += operator
    x += 10;
    printf("Add and assign operator: x += 10 is: %d\n", x);

    // -= operator
    x -= 10;
    printf("Subtract and assign operator: x -= 10 is: %d\n", x);

    // *= operator
    x *= 10;
    printf("Multiply and assign operator: x *= 10 is: %d\n", x);

    // /= operator
    x /= 10;
    printf("Divide and assign operator: x /= 10 is: %d\n", x);
    
    return 0;
}