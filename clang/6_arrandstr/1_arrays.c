#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int* copy(int arr[], int size) {
    int* copy = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        copy[i] = arr[i];
    }

    return copy;
}

int main() {
    // array of integers
    int numbers[5] = {1, 2, 3, 4, 5};
    // array of characters
    char name[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("Array of integers: \n");
    // print the array of integers
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n\n");
    printf("Array of characters: \n");
    // print the array of characters
    for (int i = 0; i < 6; i++) {
        if (name[i] == '\0') continue;
        printf("%c ", name[i]);
    }

    printf("\n\n");
    // array initialization using initializer list
    int numbers2[5] = {1, 2, 3, 4, 5};
    // array initialization using loop
    int numbers3[5];
    for (int i = 0; i < 5; i++) {
        numbers3[i] = i + 1;
    }
    // array initialization without specifying the size
    int numbers4[] = {1, 2, 3, 4, 5};

    printf("Array initialization using initializer list: \n");
    // print the array of integers
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers2[i]);
    }

    printf("\n\n");
    printf("Array initialization using loop: \n");
    // print the array of integers
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers3[i]);
    }

    printf("\n\n");
    printf("Array initialization without specifying the size: \n");
    // print the array of integers
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers4[i]);
    }

    // 1d array
    int arr[5] = {1, 2, 3, 4, 5};
    // 2d array
    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\n\n");
    printf("1D array: \n");
    // print the 1d array
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
    printf("2D array: \n");
    // print the 2d array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2d[i][j]);
        }

        printf("\n");
    }
    
    // print the address of the array
    printf("\n");
    printf("Relationship between array and pointer: \n");

    // relationship between array and pointer
    int arr3[5] = {1, 2, 3, 4, 5};
    int* ptr = arr3;
    printf("Address of the array: %p\n", arr3);
    printf("Address of the first element: %p\n", &arr3[0]);
    printf("Address of the array from pointer: %p\n", ptr);
    printf("Address of the pointer itself: %p\n", &ptr);
    printf("Array values using pointer: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n\n");
    printf("Passing array to function: \n");
    // passing array to function
    print_array(arr3, 5);

    printf("\n");
    printf("Returning array from function: \n");
    // returning array from function
    int* arr4 = copy(arr3, 5);
    print_array(arr4, 5);

    return 0;
}