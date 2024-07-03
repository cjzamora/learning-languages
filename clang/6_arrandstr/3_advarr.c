#include <stdio.h>

const int ROWS = 3;
const int COLS = 3;

// pass 2d array to a function
// - rows is optional
// - cols is required
void print_arr_1(int arr[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

// pass 2d array to a function using pointer
// - rows is required
// - cols is required
void print_arr_2(int* arr, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            // pointer arithmetic for 2d array
            // sizeof(int) = 4 bytes
            // 
            // memory layout:
            // - (0x100 + 0 * 3) + 0 = (4 * 0) +0  bytes = 0x100
            // - (0x100 + 0 * 3) + 1 = (4 * 1) +4  bytes = 0x104
            // - (0x100 + 0 * 3) + 2 = (4 * 2) +8  bytes = 0x108
            // - (0x100 + 1 * 3) + 0 = (4 * 3) +12 bytes = 0x10c
            // - (0x100 + 1 * 3) + 1 = (4 * 4) +16 bytes = 0x110
            // - (0x100 + 1 * 3) + 2 = (4 * 5) +20 bytes = 0x114
            // - (0x100 + 2 * 3) + 0 = (4 * 6) +24 bytes = 0x118
            // - (0x100 + 2 * 3) + 1 = (4 * 7) +28 bytes = 0x11c
            // - (0x100 + 2 * 3) + 2 = (4 * 8) +32 bytes = 0x120
            int value = *(arr + i * cols + j);
            printf("%d ", value);
        }

        printf("\n");
    }
}

// pass 2d array to a function using pointer to an array
// - rows is required
void print_arr_3(int (*arr)[COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

// array wrapper
struct Array {
    int arr[5];
};

// passing array by value
void modify_array(struct Array a) {
    int *arr = a.arr;

    printf("Array before modify inside modify_array: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Array after modify inside mofidy_array: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // get the size of the array
    // - sizeof(arr) returns the size of the array in bytes
    // - sizeof(arr[0]) returns the size of the first element in bytes
    // - sizeof(arr) / sizeof(arr[0]) returns the actual size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of arr using sizeof: %d\n", size);

    // get the size of the array using pointer arithmetic
    // - int arr[5];
    // - *(&arr + 1) returns the address of the next element past the last element of arr
    // - arr is the address of the first element of arr
    // - in C subtracting the two pointers returns the number of elements between them
    // - if size_t is int, result should be 20 since size_t is 4 bytes * 5 elements
    // - then internally C will divide the result by the size of the type to get the number of elements
    // - so *(&arr + 1) - arr = sizeof(arr) / sizeof(arr[0])
    // 
    // in memory layout:
    // suppose arr is at 5 elements
    // address of arr[0] = 0x100
    // address of arr[1] = 0x104
    // address of arr[2] = 0x108
    // address of arr[3] = 0x10c
    // address of arr[4] = 0x110
    // ...
    // *(&arr + 1) = 0x114
    // so... 0x114 - 0x100 = 20 bytes
    // internally C will divide 20 by 4 to get 5 elements
    // 0x114 - 0x100 = 20 / 4 = 5 elements
    // 
    int size2 = *(&arr + 1) - arr;
    printf("Size of arr using pointer arithmetic: %d\n", size2);

    printf("\n");
    printf("Test 2D array function:\n");
    // 2d array
    int arr2d[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    print_arr_1(arr2d);

    printf("\n");
    printf("Test 2D array using pointer:\n");
    // pass the first row of the 2d array
    print_arr_2((int *)arr2d, 3, 3);

    printf("\n");
    printf("Test 2D array using pointer to an array:\n");
    // pass the 2d array
    print_arr_3(arr2d);

    printf("\n");
    printf("Test passing array by value:\n");
    struct Array a = {{1, 2, 3, 4, 5}};
    for(int i = 0; i < 5; i++) {
        a.arr[i] = i + 1;
    }

    modify_array(a);

    printf("Array after modify inside main: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a.arr[i]);
    }

    printf("\n");

    return 0;
}