#include <stdio.h>

int main() {
    int v[3] = { 10, 20, 40 };

    // point to v[0]
    int *ptr = v;

    for(int i = 0; i < 3; i++) {
        printf("Value of v[%d] = %d\n", i, *ptr);
        printf("Address of v[%d] = %p\n", i, ptr);
        ptr++;
    }

    printf("\n");

    // can also be accessed using array index
    printf("Value of v[0] = %d\n", v[0]);
    printf("Address of v[0] = %p\n", &v[0]);
    
    printf("Value of v[1] = %d\n", v[1]);
    printf("Address of v[1] = %p\n", &v[1]);

    printf("Value of v[2] = %d\n", v[2]);
    printf("Address of v[2] = %p\n", &v[2]);

    int x = 10;
    int *xp = &x;

    // increment = current address + size of data type
    // decrement = current address - size of data type
    // ex:
    // for integer = 4 bytes
    // for char = 1 byte

    printf("\n");
    printf("Value of x = %d\n", x);
    xp++;
    printf("Value of x++ = %d\n", *xp);
    xp--;
    printf("Value of x-- = %d\n", *xp);
    printf("\n");


    // another example of pointer arithmetic to arrays
    // reset pointer to v[0]
    ptr = v;
    for(int i = 0; i < 3; i++) {
        // print value of where pointer is pointing to
        printf("Value of v[%d] = %d\n", i, ptr[0]);
        ptr++;
    }

    return 0;
}
