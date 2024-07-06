#include <stdio.h>
 
main()
{
	int i,n,fact=1;
	printf("Enter a value to find its factorial ::>> ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is ::>> %d",n,fact);
 } 
