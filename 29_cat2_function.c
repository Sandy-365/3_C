#include <stdio.h>
main()
{
	void sum(int,int);
	int a,b;
	printf("ENETER ANY TWO NUMBER ::>> \n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	printf("\nSTOP");
	sum(10,20);
}
void sum(int m , int n)
{
	int o;
	o=m+n;
	printf("sum=%d",o);
}
