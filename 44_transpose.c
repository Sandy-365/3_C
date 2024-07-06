#include <stdio.h>
main()
{
	int arr[3][3],i,j;
	
	printf("Enter an matrix of 3 x 3 elements \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %d %d value ::>> ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n Transpose of your matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr[j][i]);
		}
		printf("\n");
	}	

}
