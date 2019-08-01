#include<stdio.h>
int main()
{
	int arr[6] = { 22, 43, 54, 56, 87, 91 };
	int num, low, mid, high, flag=0;
	printf( "Enter the number for search?" );
	scanf( "%d", &num );
	low = 0;
	high = 5;
	mid = (low + high) / 2;
	while ( low <= high)
	{
		if ( num == arr[mid] ) {
			flag++;
			printf( "Element found at %d.\n", mid + 1 );
			break;
		}
		else if ( num > arr[mid] ) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
		mid = (low + high) / 2 ;
	}
	if( flag == 0 )
	{
		printf( "\nElement is not found.\n" );
	}
	return 0;
}
