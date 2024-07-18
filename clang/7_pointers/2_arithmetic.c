#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("p = %p\n", p);
    // +4 bytes (size of int)
    p++;
    printf("p++ = %p\n", p);
    // -4 bytes (size of int)
    p--;
    printf("p-- = %p\n", p);

    // pointer addition
    // +20 bytes (5 * size of int)
    p = p + 5;
    printf("p + 5 = %p\n", p);

    // pointer subtraction
    // -20 bytes (5 * size of int)
    p = p - 5;
    printf("p - 5 = %p\n", p);

    // subtraction of two pointers
    //
    // The subtraction of two pointers is only valid when
    // they have the same data type. The result is generated
    // by calculating the difference between the two addresses
    // how many bits of data it is according to the data type.
    //
    // Ex:
    // Two integer pointers say
    // ptr1 = 0x1000
    // ptr2 = 0x1004
    // 
    // since the size is 4 bytes, therefore the increment between
    // the two pointers is given by (4/4) = 1
    // 140701953265868 - 140701953265864 = 4
    int x = 100, y = 4;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    printf("ptr1 - ptre = %ld\n", ptr1 - ptr2);

    return 0;
}
