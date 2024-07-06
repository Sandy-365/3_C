#include <stdio.h>
 
main()
{
	int x=5;
	printf("--------RESULTS USING NOT OPERATOR(!)----- (if x=5) -----\n\n");
	printf("\tThe return value for !(x==5) is ::>> %d \n",!(x==5));
	printf("\tThe return value for !(x!=5) is ::>> %d \n",!(x!=5));
	printf("\tThe return value for !( x>5) is ::>> %d \n",!(x>5));
	printf("\tThe return value for !( x<5) is ::>> %d \n",!(x<5));
}
