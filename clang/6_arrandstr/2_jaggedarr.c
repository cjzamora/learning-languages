#include <stdio.h>

int main() {
    int row0[] = {1, 2, 3};
    int row1[] = {4, 5, 6, 7};
    int row2[] = {8, 9};

    int* jagged[3] = {row0, row1, row2};
    int size[] = {3, 4, 2};

    printf("Test jagged array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < size[i]; j++) {
            printf("%d ", jagged[i][j]);
        }

        printf("\n");
    }
    return 0;
}