#include <stdio.h>
double avg(int arr[],int size);
main()
{
	int a,i,av;
	int arr1[a];
	printf("Enter the number of elments in array you want ::>> ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("Enter the %d value ::>> ",i+1);
		scanf("%d",&arr1[i]);
	}

	for(i=0;i<a;i++)
	{
		printf("%d \n",arr1[i]);
	}
	av=avg(arr1,a);
	printf("Average Value is : %d ",av);
}

double avg(int arr[],int size)
{
	int i;
	double avg1;
	double sum =0;
	
	for(i=0;i<size;++i)
	{
		sum=sum+arr[i];
	}
	printf("Sum of array is = %f \n",sum);\
	avg1=sum/size;
	return avg1;
}
