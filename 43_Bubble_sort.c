#include <stdio.h>
main()
{
	int arr[5],i;
	printf("\tEnter an array with Five elements\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element ::>> ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d \n",arr[i]);
	}
}
