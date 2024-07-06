#include <stdio.h>
 
main()
{
	int a,b,c;
	printf("ENTER THREE VALUES ::>> ");
	scanf("%d%d%d",&a,&b,&c);

	if ((a>b)&&(a>c))
	{
		printf("A is the largest value");
	}
	else if((b>a)&&(b>c))
	{
		printf("B is the largest value");
	}
	else
	{
		printf("C is the largest value");
	}
}
