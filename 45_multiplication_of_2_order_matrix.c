#include <stdio.h>
main()
{
	int a,i,j;
	printf("Enter the order of matrix to multiply ::>> ");
	scanf("%d",&a);
	
	int arr1[a][a],arr2[a][a],mul[a][a];
	printf("\t\tEnter the elements in matrix A\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("Enter %d%d element ::>>  ",i,j);
			scanf("%d",&arr1[i][j]);	
		}
	
	}
	printf("\n\t\tEnter the elements in matrix B\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("Enter %d%d element ::>>  ",i,j);
			scanf("%d",&arr2[i][j]);	
		}
	
	}	
	printf("\n\t\tHere is your matrix A\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d \t",arr1[i][j]);	
		}
		printf("\n");
	}	

	printf("\n\t\tHere is your matrix B\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d \t",arr2[i][j]);	
		}
		printf("\n");
	}
	
	printf("Multiplication of matrix A and B is \n");
	for(i=0;i<a;i++)
	{
//		printf("%d",arr1[i]);
		for(j=0;j<a;j++)
		{
			printf("%d \t",arr1[i]);
		}
		printf("\n");
	}

}
