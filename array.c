//program to read and display n numbers using and array

//header files
#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	int n ;
	int arr[20];
	printf("\n Enter the number of elements in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("\nn The array elements are");
	for(i=0;i<n;i++)
	      printf("\t %d",arr[i]);
	    
    return 0;
}
