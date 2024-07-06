#include <stdio.h>
int main()
{
	struct student
	{
	int r;
	float p;
	char n;
	};
	
	struct student s;
	struct student r;
	

	s={2,7.7,'r'};
	printf("Roll no of student = %d \n",s.r);
	printf("per of student = %f \n",s.p);
	printf("Name = %c\n",s.n);
	
	printf("Enter rol,Percentage and Name of student \n");
	scanf("%d %f %c",&r.r,&r.p);
	printf("Roll no = %d Percentage = %f Name = %c",r.r,r.p,r.n);


}
