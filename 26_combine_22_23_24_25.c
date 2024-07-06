#include <stdio.h>
 
main()
{
	int m;
	int i,n,fact=1;
	int a,b=0,c=1,sum=0;
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");
	printf("\t1 ::>> FACTORIAL \n\t2 ::>> ODD NUMBERS \n\t3 ::>> EVEN NUMBERS \n\t4 ::>> FIBONACCI  \n\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");
	printf("ENTER YOUR CHOICE ::>> ");
	scanf("%d",&m);
	switch(m)
	{
		case 1 :
				printf("Enter a value to find its factorial ::>> ");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					fact=fact*i;
				}
				printf("factorial of %d is ::>> %d",n,fact);
				break;
		case 2 :
					printf("Odd number between 1-100 are ::>> \n");
					for(i=1;i<=100;i+=2)
					{
						printf("%d \n",i);
					}
					printf("done");
					break;
		case 3 :
					printf("Even number between 0-100 are ::>> \n");	
					for(i=0;i<=100;i+=2)
					{
						printf("%d  ",i);
					}
					printf("\n done");
					break;
		case 4 :
					printf("Enter the total no of terms to be taken ::>> ");
					scanf("%d",&a);
					printf("0 1 ");
					for(i=1;i<=a;i++)
					{
						sum=c+b;
						b=c;
						c=sum;
			
						printf("%d ",sum);
					}
					break;
		default:
				printf("WRONG! CHOICE ENTER YOUR CHOICE BETWEEN 1-4 ONLY");	
	}
}
