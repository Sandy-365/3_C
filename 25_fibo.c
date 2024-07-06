#include <stdio.h>
 
main()
{
	int i,a,b=0,c=1,sum=0;
	printf("Enter the total no of terms to be taken ::>> ");
	scanf("%d",&a);
	printf("0 1 ");
	for(i=1;i<=a;i++)
	{
		sum=c+b;
		b=c;
		c=sum;
			
		printf("%d ",sum);
	}	
}
