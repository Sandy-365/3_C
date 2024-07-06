#include <stdio.h>
 
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d X %d = %d \t",j,i,i*j);
		}
		printf("\n");
	}
}
