#include <stdio.h>
#define ROW 2
#define COL 4

int main() {
    float arr[ROW][COL];

    printf("Enter values for the array:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("Enter the value for arr[%d][%d]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }
  
    printf("The array is:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%8.2f ", arr[i][j]);
        }
        printf("\n");
    }

    arr[0][1] = 24.3;
    arr[1][2] = 43.2;

    printf("After changing the elements the array is:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%8.2f ", arr[i][j]);
        }
        printf("\n");
    }

    float smallest = arr[0][0];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (arr[i][j] < smallest) {
                smallest = arr[i][j];
            }
        }
    }

    float sum = 0.0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            sum += arr[i][j];
        }
    }
    float average = sum / (ROW * COL);

    printf("The smallest element of the array is %.2f\n", smallest);
    printf("The average of all elements of the array is %.2f\n", average);

    return 0;
}