#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_row(int rows, int cols, const int a[rows][cols], int selected_row) {
    for (int j = 0; j < cols; j++) {
        printf("%d ", a[selected_row][j]);
    }
    printf("\n");
}

void print_col(int rows, int cols, const int a[rows][cols], int selected_col) {
    for (int i = 0; i < rows; i++) {
        printf("%d\n", a[i][selected_col]);
    }
}

void rand_init(int rows, int cols, int a[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 100;
        }
    }
}

void print(int rows, int cols, const int a[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void swap_rows(int rows, int cols, int a[rows][cols], int row1, int row2) {
    for (int j = 0; j < cols; j++) {
        int temp = a[row1][j];
        a[row1][j] = a[row2][j];
        a[row2][j] = temp;
    }
}

int main() {
    srand(time(0));
    int d[5][3];
    rand_init(5, 3, d);

    print(5, 3, d);

    print_row(5, 3, d, 0);
    print_col(5, 3, d, 1);

    printf("\n");

    print(5, 3, d);

    swap_rows(5, 3, d, 0, 1);
    print(5, 3, d);

    return 0;
}