#include <stdio.h>

int main() {

    int matrix[6][2] = {
        {0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}, {10, 11}
    };
    
    // Print the matrix
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
