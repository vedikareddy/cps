#include<stdio.h>
void a(int n);
int main()
{
	a(6);
}
void a(int n)
{
	if(n>0)
	{
	a(n-1);
	printf("%d",n);
	a(n-1);
	
	}
}

