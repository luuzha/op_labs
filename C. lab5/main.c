#include <stdio.h>

int main() {
    int array[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};

    int matrix1[2][2] = {1, 1, 1, 4};
    int matrix2[2][2] = {1, 2, 4, 1};

    int resultMatrix[2][2] = {};

    for (int i = 0; i < 9; i++) {
        printf("%d ", array[i]);
        if ((i + 1) % 3 == 0) printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
