#include <stdio.h>
int main(void)
{
    int row1, col1, row2, col2, i, j, k, sum = 0;
    int first[10][10], second[10][10], mul[10][10];

	printf("Welcome in the Matrix Multiplication\n");
	printf("____________________________________\n");

    printf("Enter rows x col of first matrix:");
    scanf("%dx%d", &row1, &col1);
    printf("\nEnter elements of first matrix\n");

    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++){
            printf( "[%d][%d]= ", i+1, j+1 );
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter rows x col of second matrix\n");
    scanf("%dx%d", &row2, &col2);

    if (col1 != row2) {
        printf("The matrices can't be multiplied.\n");
    }
    else {
        // Get Second Matrix
        for (i = 0; i < row2; i++){
            for (j = 0; j < col2; j++){
                printf( "[%d][%d]= ", i+1, j+1 );
                scanf("%d", &second[i][j]);
            }
        }

        // Multiply the Matrix
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                for (k = 0; k < row2; k++) {
                    sum = sum + first[i][k]*second[k][j];
                }
        
                mul[i][j] = sum;
                sum = 0;
            }
        }
    
        printf("Product of the matrices:\n");
    
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                printf("%d\t", mul[i][j]);
            }
    
        printf("\n");
        }
    }

    return 0;
}