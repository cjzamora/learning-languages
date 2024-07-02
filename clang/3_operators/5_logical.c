#include <stdio.h>

int main() {
    int x = 10, y = 20;

    // logical AND operator
    printf("Logical AND operator: x && y is: %d\n", x && y);
    // logical OR operator
    printf("Logical OR operator: x || y is: %d\n", x || y);
    // logical NOT operator
    printf("Logical NOT operator: !x is: %d\n", !x);
    printf("\n");

    // short circuiting logical AND operator (both operands should be true)
    printf("Short circuiting logical AND operator: x && 0 is: %d\n", x && 0);
    // short circuiting logical OR operator (either operand should be true)
    printf("Short circuiting logical OR operator: x || 0 is: %d\n", x || 0);
    // short circuiting logical NOT operator (operand should be false)
    printf("Short circuiting logical NOT operator: !0 is: %d\n", !0);
    
    return 0;
}