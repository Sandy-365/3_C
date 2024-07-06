#include <stdio.h>
 
main()
{
	int a,b;
	
	printf("Enter any two number ::>> \n");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		printf("%d is big",a);
		
	}
	if(b>a)
	{
		printf("%d is big",b);
	}
	else
	{
		printf("Both values are equal",b);
	}
		
}
