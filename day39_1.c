//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    bool distinct[101] = {false}; 
    for (int i = 0; i < rows; i++) {
        int diagElement = matrix[i][i];
        if (diagElement < 0 || diagElement > 100 || distinct[diagElement]) {
            printf("False\n");
            return 0;
        }
        distinct[diagElement] = true;
    }
    printf("True\n");
    return 0;
}
