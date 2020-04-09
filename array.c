//program to read and display n numbers using and array

//header files
#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	int n ;//number of elements inserted in the array by the user ('the maximum limit of elements here is 20')
	int arr[20];//array declaation with maximum size 20 
	printf("\n Enter the number of elements in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)  //create a loop to input the elements from the user and put it in the array
	{
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]); //placing the input at the respective locations inside the array
	}
	//display the content of the array
	printf("\nn The array elements are");
	for(i=0;i<n;i++)
	      printf("\t %d",arr[i]);
	    
    return 0;
}
