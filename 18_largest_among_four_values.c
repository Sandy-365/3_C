#include <stdio.h>
 
main()
{
	int a,b,c,d;
	printf("ENTER FOUR NUMBERS ::>> ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if (a>b){
		if (a>c){
			if(a>d){
				printf("A is the largest number");
			}
			else{
				printf("D is the largest number");
			}
		}
		else{
			printf("C is the largest number");
		}
	}
	else if (b>c){
		if(b>d){
			printf("B is the largest number");
		}
		else{
			printf("D is the largest number");
		}
	}
	else if(c>d){
		printf("C is the largest number");
	}
	else{
		printf("D is the largest number");
	}
}
