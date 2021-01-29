#include<stdio.h>

void reverseArray(int arr[], int start , int end)
{
   int temp;
   while(start < end)
   {
   	  temp = arr[start];
   	  arr[start] = arr[end];
   	  arr[end] = temp;
   	  start++;
   	  end--;
   }	
}

void printArray(int arr[],int size)
{
	int i ;
	for(i=0; i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

}

void main()
{
	int array[]={1,2,3,4,5,6,7,8};
	int n = sizeof(array)/ sizeof(array[0]);
	printf("Array without reversal \n  "  ); 
	printArray(array , n);
	reverseArray(array,0,n-1);
	printf("Array after reversal \n  " );
	printArray(array , n);
	
}
