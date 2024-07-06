#include <stdio.h>
 
main()
 //       mall 
{
	float a,b,sum,gst=18.00;
	
	printf("Enter the price of shirt ::>> ");
	scanf("%f",&a);
	
	printf("\nEnter the price of pant ::>> ");
	scanf("%f",&b);
	
	sum=a+b;
	gst=((gst/100)*sum)+sum;
	printf("\nPrice is ::>> %0.2f",sum);
	printf("\nTotal bill after gst is ::>> %0.2f",gst);
	
}
