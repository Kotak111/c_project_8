#include <stdio.h>


void findCubes(int *arr, int rows, int cols) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Cube of %d is %d\n", *(arr + i * cols + j), (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j)));
        }
    }
}

int main() {
    int rows, cols, i, j;

  
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

   
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    findCubes((int *)arr, rows, cols);

    return 0;
}
