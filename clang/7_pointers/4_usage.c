#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void modify(int *ptr) {
    // modify value of where pointer is pointing to
    *ptr = 100;
}

void print_array(int *ptr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Value of v[%d] = %d\n", i, *ptr);
        ptr++;
    }
}

void multi_value(int n, int *sq, int *sqr) {
    *sq = n * n;
    *sqr = sqrt(n);
}

int *create_arr(int size) {
    int *arr = (int *)malloc(size * sizeof(int));
    return arr;
}

bool compare(int a, int b) {
    return a == b;
}

int find(int *arr, int size, int x, bool (*cmp)(int, int)) {
    for(int i = 0; i < size; i++) {
        if (cmp(*(arr + i), x)) {
            return i;
        }
    }

    return -1;
}

int main() {
    // pass by reference
    int x = 10;
    printf("Pass by reference:\n");
    printf("Value of x = %d\n", x);
    modify(&x);
    printf("Value of x after modify = %d\n", x);

    // efficient way to pass array to function
    // without pointer, passing a large array to
    // function will make a copy of the array
    // which is inefficient
    int v[3] = { 10, 20, 40 };
    printf("\nPass array to function:\n");
    print_array(v, 3);

    int n = 25;
    int sq, sqr;
    multi_value(n, &sq, &sqr);
    printf("\nReturn multiple values from function:\n");
    printf("Square of %d = %d\n", n, sq);
    printf("Square root of %d = %d\n", n, sqr);

    // dynamic memory allocation
    int size = 5;
    int *arr = create_arr(size);
    for(int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }
    printf("\nDynamic memory allocation:\n");
    for(int i = 0; i < size; i++) {
        printf("Value of arr[%d] = %d\n", i, arr[i]);
    }

    // function pointer
    int arr2[5] = { 10, 20, 30, 40, 50 };
    int target = 40;
    int result = find(arr2, 5, target, compare);
    printf("\nFunction pointer:\n");
    if (result == -1) {
        printf("Value %d not found in array\n", target);
    } else {
        printf("Value %d found at index %d\n", target, result);
    }

    return 0;
}
