#include <stdio.h>

// for "extern" keyword, see clang/basics/variables.c

// global scope accessible anywhere, but can be shadowed by local variables
int g = 100;

void print_global() {
    // global scope is accessible in any function
    printf("> \"Global scope g\": g = %d\n", g);
}

int main() {
    int x = 10, y = 20;
    
    printf("Test \"Global scope g\": g = %d\n", g);
    printf("\n");

    printf("Before modify global scope g\n");
    print_global();
    printf("After modify global scope g\n");
    g = 200;
    print_global();
    printf("\n");

    {
       // outer block scope, valid for the entire block
       printf("Test \"Outer x and y\": x = %d, y = %d\n", x, y); 

        {
            // y is declared again, so outer block y 
            // is not accessible in this block
            int y = 40;

            // change the outer block x value
            x++;

            // change the inner block y value
            y++;

            // inner block scope, valid for the entire block
            printf("Test \"Outer x, Inner y\": x = %d, y = %d\n", x, y);
        }

        // inner block y is not accessible here
        printf("Test \"Outer x and y\": x = %d, y = %d\n", x, y);
    }

    return 0;
}