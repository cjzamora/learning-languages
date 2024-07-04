#include <stdio.h>

int main() {
    // In C, string is a 1D array of characters and is defined as an array of characters.
    // char str[] = "Hello, World!";
    //
    // But an array of strings in C is a 2D array of character types. Each string is terminated
    // by a null character '\0'. It is an application of a 2D array.
    // char str[n] = { ..., list of string }

    // Basic way of defining an array of strings
    // - each string is a 1D array of characters
    // - each string is terminated by a null character '\0'
    // - memory is allocated in a contiguous block, means each row will have the same size
    // - each row will have 50 bytes of memory, regardless of the length of the string
    //   so it's memory consumption is pretty high.
    // - to avoid this, we can use an array of pointers to strings
    // - we cannot directly assign a string to an array of strings
    //   unless we use strcpy, or assign it one by one
    char arr[3][50] = {
        "Hello, World!",
        "Good Morning!",
        "Good Night!"
    };

    printf("Array of strings: \n");
    for(int i = 0; i < 3; i++) {
        printf("%s ", arr[i]);
    }

    printf("\n\n");

    // Array of pointers to strings
    // - single dimensional array of pointers to strings
    // - *arr2 returns the first string
    // - **arr2 returns the first character of the first string
    // - arr2 returns the memory address of the first string
    // - arr2[0] returns the memory address of the first string
    // - *arr2[0] returns the first character of the first string
    // - more memory efficient than the basic way, because it only
    //   allocates memory for the string itself, not the whole block, 
    //   regardless of the length
    char* arr2[] = {
        "ABC",
        "DEF",
        "JKL"
    };

    printf("Array of pointers to strings: \n");
    for(int i = 0; i < 3; i ++) {
        printf("%s ", *(arr2 + i));
    }

    printf("\n\n");
    printf("First characters of each string: \n");
    for(int i = 0; i < 3; i++) {
        printf("%c ", **(arr2 + i));
    }

    printf("\n");
    return 0;
}