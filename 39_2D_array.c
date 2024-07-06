#include <stdio.h>
main()
{
	int a[2][2],i,j;
	printf("enter any four elemnet\n");
	
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d %d ",i,j);
			scanf("%d ",&a[i][j]);
		}
	}
	printf("Here is your matrix of order 2 X 2 ::>> \n");
	
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}

}
