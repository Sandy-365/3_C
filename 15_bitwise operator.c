#include <stdio.h>
 
main()
{
	int a=60,b=13,c=0;
	
	c=a&b;
	printf("Line 1 - Value of C for (c =a&b) is ::>> %d \n",c);
	
	c=a|b;
	printf("Line 2 - Value of C for (c =a|b) is ::>> %d \n",c);
	
	c=a^b;
	printf("Line 3 - Value of C for (c =a^b) is ::>> %d \n",c);

	c=~a;
	printf("Line 4 - Value of C for (c = ~a) is ::>> %d \n",c);
	
	c=a<<2;
	printf("Line 5 - Value of C for (c=a<<2) is ::>> %d \n",c);
	
	c=a>>2;
	printf("Line 6 - Value of C for (c=a>>2) is ::>> %d \n",c);		
}
