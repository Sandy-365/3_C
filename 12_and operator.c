#include <stdio.h>
 
main()
{
	int h,a;
	printf("Enter height of candidate in cm ::>> ");
	scanf("%d",&h);
	
	printf("\nEnter the age of candidate ::>> ");
	scanf("%d",&a);
	
	if ((h>173)&&(a>21))
	{
		printf("\nCandidate is pass");
	}
	else
	{
		printf("\nCandidate is fail");
	}
}
