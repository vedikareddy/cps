#include<stdio.h>
int fact(int x);
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	b=fact(a);
	printf("%d",b);
}
int fact(int x)
{
	
	if(x>1)
	return x*fact(x-1);
	if(x=1)
	return 1;
 	
}

