#include <stdio.h>
 
main()
{
	int a;
	printf("Enter a number between 1 to 12 ::>> ");
	scanf("%d",&a);	
	
	if (a==1){
		printf(" January and there are 31 days in this month");
	}
	
	else if(a==2){
		printf(" February and there are 28 days in this month");
	}
	
	else if(a==3){
		printf(" March and there are 31 days in this month");
	}
	
	else if(a==4){
		printf(" April and there are 30 days in this month");
	}
	
	else if(a==5){
		printf(" May and there are 31 days in this month");
	}
	
	else if(a==6){
		printf(" June and there are 30 days in this month");
	}
	
	else if(a==7){
		printf(" July and there are 31 days in this month");
	}
	
	else if(a==8){
		printf(" August and there are 31 days in this month");
	}
	
	else if(a==9){
		printf(" September and there are 30 days in this month");
	}
	
	else if(a==10){
		printf(" October and there are 31 days in this month");
	}
	
	else if(a==11){
		printf(" November and there are 30 days in this month");
	}
	
	else if(a==12){
		printf(" December and there are 31 days in this month");
	}
	else{
		printf("Enter a number between 1 to 12 only");
	}
}
