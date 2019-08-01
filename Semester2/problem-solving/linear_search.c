#include<stdio.h>
int main()
{
	int arr[5] = { 23, 44, 52, 69, 85 };
	int i, num, flag=0;
	printf( "Enter the number for search?" );
	scanf( "%d", &num );
	for( i=0; i < 5; i++ )
	{
		if( num == arr[i] )
		{
			flag++;
			printf( "\nElement found at %d.\n", i+1 );
		}
	}
	if( flag == 0 )
	{
		printf( "\nElement is not found.\n" );
	}
}
