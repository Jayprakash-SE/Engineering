#include<stdio.h>
int main(void)
{
	int row, col, i, j, first[10][10], second[10][10], sum[10][10];
	printf("Welcome in the Matrix Addition\n");
	printf("____________________________________\n");
	printf("Enter the matrix row X col: ");
	scanf("%dx%d", &row, &col);
	
	// Get First matrix
	printf("\nEnter First Matrix\n");
	for(i=0; i < row; i++)
	{
		for(j=0; j<col; j++)
		{
                        printf( "[%d][%d]= ", i+1, j+1 );
			scanf("%d", &first[i][j] );
		}
	}

        // Get Second matrix
        printf("\nEnter Second Matrix\n");
        for(i=0; i < row; i++)
        {
                for(j=0; j<col; j++)
                {
                        printf( "[%d][%d]= ", i+1, j+1 );
                        scanf("%d", &second[i][j] );
                }
        }

        // Sum the matrix
        for(i=0; i < row; i++)
        {
                for(j=0; j<col; j++)
                {
                        sum[i][j] = first[i][j] + second[i][j];
                }
        }

        // Print the Sum  matrix
        printf("\nThe Sum Matrix is:-\n");
        for(i=0; i < row; i++)
        {
                for(j=0; j<col; j++)
                {
                        printf("%d\t", sum[i][j] );
                }
                printf("\n");
        }

	printf("\n");
	return 0;
}
