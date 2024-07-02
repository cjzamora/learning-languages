#include <stdio.h>

int main() {
    int n = 0, y = 1;

    // ternary operator
    n = (y == 1) ? 100 : 200;
    printf("Ternary operator: n = (y == 1) ? 100 : 200 is: %d\n", n);

    // ternary operator
    n = (y == 2) ? 100 : 200;
    printf("Ternary operator: n = (y == 2) ? 100 : 200 is: %d\n", n);
    
    // ternary operator
    n = (y == 1) ? 100 : (y == 2) ? 200 : 300;
    printf("Ternary operator: n = (y == 1) ? 100 : (y == 2) ? 200 : 300 is: %d\n", n);

    // ternary operator
    n = (y == 2) ? 100 : (y == 2) ? 200 : 300;
    printf("Ternary operator: n = (y == 2) ? 100 : (y == 2) ? 200 : 300 is: %d\n", n);
    
    return 0;
}