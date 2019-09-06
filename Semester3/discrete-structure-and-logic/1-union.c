#include <stdio.h>
#include <stdlib.h>
#define n 5
#define m 5

int main(int argc, char *argv[]) {
	int A[n], B[m], C[m+n], i, j, k=0, flag=0;
	
	// Get the Array A values
	for(i=0; i<n; i++){
		printf("\nEnter the element for Set A? ");
		scanf("%d", &A[i] );
	}
	
	// Get the Array B values
	for(i=0; i<m; i++){
		printf("\nEnter the element for Set B? ");
		scanf("%d", &B[i] );
	}
	
	// Fill the Array C with Array A
	for( i=0; i<n; i++ ){
		C[k] = A[i];
		k++;
	}
	
	// Fill the Array C with Array B
	for( i=0; i<m; i++ ){
		flag=0;
		for( j=0; j<k; j++ ){
			if( C[j] == B[i] ){
				flag++;
				break;
			}
		}
		
		if( flag == 0){
			C[k] = B[i];
			k++;
		}
	}
	
	printf("\n\nThe Result Set of A U B are:-\n");
	
	// Print the Array C
	for( i=0; i < k; i++){
		printf("%d\t", C[i] );
	}
	
	return 0;
}