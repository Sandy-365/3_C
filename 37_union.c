#include <stdio.h>
union stu
{
	int r;
	float p;
	char n;
};
main()
{
	union stu u1;
	u1.r=7;
	printf("%d\n",u1.r);
	u1.p=7.7;
	printf("%f\n",u1.p);
	u1.n='H';
	printf("%c",u1.n);
	
}
