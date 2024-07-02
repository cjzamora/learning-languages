#include <stdio.h>
#include <stdlib.h>

int main() {
    // sizeof operator
    printf("Size of int is: %lu\n", sizeof(int));
    printf("Size of char is: %lu\n", sizeof(char));
    printf("Size of float is: %lu\n", sizeof(float));
    printf("Size of double is: %lu\n", sizeof(double));
    printf("Size of long is: %lu\n", sizeof(long));
    printf("Size of long long is: %lu\n", sizeof(long long));
    printf("Size of long double is: %lu\n", sizeof(long double));
    printf("Size of short is: %lu\n", sizeof(short));
    printf("Size of unsigned int is: %lu\n", sizeof(unsigned int));
    printf("Size of signed int is: %lu\n", sizeof(signed int));
    printf("Size of unsigned char is: %lu\n", sizeof(unsigned char));
    printf("Size of signed char is: %lu\n", sizeof(signed char));
    printf("Size of unsigned short is: %lu\n", sizeof(unsigned short));
    printf("Size of signed short is: %lu\n", sizeof(signed short));
    printf("Size of unsigned long is: %lu\n", sizeof(unsigned long));
    printf("Size of signed long is: %lu\n", sizeof(signed long));
    printf("Size of unsigned long long is: %lu\n", sizeof(unsigned long long));
    printf("Size of signed long long is: %lu\n", sizeof(signed long long));
    printf("\n");

    // determine size of array
    int arr[] = {1, 2, 3, 4, 5};
    // print size of array 4 bytes * 5 elements = 20 bytes
    // to get the actual number of elements, divide the total size by the size of one element
    printf("Size of arr is: %lu\n", sizeof(arr) / sizeof(arr[0]));
    // print size of one element
    printf("Size of arr[0] is: %lu\n", sizeof(arr[0]));
    printf("\n");

    // dynamically allocate memory
    // this is useful when we don't know the size of the type on a particular machine
    int *ptr = (int *)malloc(sizeof(int));
    // print size of pointer, which is 8 bytes on a 64-bit machine
    printf("Size of ptr is: %lu\n", sizeof(ptr));
    // print size of the type that ptr points to, which is 4 bytes for an int
    printf("Size of *ptr is: %lu\n", sizeof(*ptr));
    // free the memory
    free(ptr);
    
    return 0;
}