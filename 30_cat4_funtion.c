#include <stdio.h>
main()
{
	int multi(void);
	int c;
	c=multi();
	printf("multi = %d \n",c);
	c=multi();
	printf("multi = %d\n",c);
}
int multi(void)
{
	int m,n,o;
	printf("Enter any two no \n");
	scanf("%d %d",&m,&n);
	o=m*n;
	return o;
}
