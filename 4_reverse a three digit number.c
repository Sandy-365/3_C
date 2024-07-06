#include <stdio.h>
 
main()
{
	int a,b,c,d,sum,rev,t;
	
	printf("Enter a four digit number ::>> ");
	scanf("%d",&t);
	
	printf("\nYou have entered ::>> %d\n",t);
	
	a=t%10;
	t=t/10;
	
	b=t%10;
	t=t/10;
	
	c=t%10;
	t=t/10;
	
	d=t%10;
	
	sum=a+b+c+d;
	
	rev=(a*1000)+(b*100)+(c*10)+(d);
	
	printf("\nTotal sum of digit is ::>> %d\n",sum);
	printf("\nReverse value is ::>> %d\n",rev);
	
	
}
