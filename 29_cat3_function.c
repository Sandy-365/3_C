#include <stdio.h>
main()
{
	int sub(int,int);
	int a,b,c;
	printf("ENETER ANY TWO NUMBER ::>> \n");
	scanf("%d %d",&a,&b);
	c=sub(a,b);
	printf("\nsub = %d",c);
}
int sub(int m , int n)
{
	int o;
	o=m-n;
	return o;
}
