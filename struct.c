#include<stdio.h>
#include<string.h>
int main()
{	
	struct employee
	{
	char name[10];
	int age;
	float salary;
	long long int pnum;
	};
struct employee s1;
printf("enter the name");
scanf("%s",&s1.name);
printf("enter the age");
scanf("%d",&s1.age);
printf("enter the salary");
scanf("%f",&s1.salary);
printf("enter the pnum");
scanf("%lld",&s1.pnum);
printf("%s\n",s1.name);
printf("%d\n",s1.age);
printf("%f\n",s1.salary);
printf("%lld\n",s1.pnum);
}
