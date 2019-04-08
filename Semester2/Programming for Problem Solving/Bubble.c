#include<stdio.h>
int main()
{
	int a[5] = { 1002, 122, 1238, 2139, 34344 }, i,j;
	for( i=0; i < 4; i++)
	{
		for( j=0; j < 4-i; j++)
		{
			if( a[j] > a[j+1])
			{
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];;
			}
		}
	}
	printf("The sorted array is:\n");
	for (i=0;i < 5;i++)
	{
		printf("%d\n",a[i]);
	}
}
	
