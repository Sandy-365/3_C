#include <stdio.h>
main()
{
	int arr[5],i,b;
	char f='nf';
	printf("\t\tEnter an array of 5 elements\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element ::>> ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d \n",arr[i]);	
	}
	printf("Enter the elemet whoch you want to search ::>> ");
	scanf("%d",&b);
	for(i=0;i<5;i++)
	{
		if(b==arr[i])
		{
			printf("your element is present at %d index",i);
			f='f';
			break;
		}
	}
	
}
