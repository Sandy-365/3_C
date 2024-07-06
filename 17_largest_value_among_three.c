#include <stdio.h>
 
main()
{
	int a,b,c;
	printf("ENTER THREE NUMBERS ::>> ");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b){
		if (a>c){
			printf("A is the largest number that is ::>> %d",a);
		}
		else{
			printf("C is the largest number that is ::>> %d",c);
		}
	}
	else if (b>c){
		printf("B is the largest number that is ::>> %d",b);
	}
	else{
		printf("C is the largest number that is ::>> %d",c);
	}
}
