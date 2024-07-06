#include <stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter four vlues in Mtarix A \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Enter A%d%d value ::>> ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter four vlues in Mtarix B \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Enter B%d%d value ::>> ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrx is ::>> ");
	
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}
