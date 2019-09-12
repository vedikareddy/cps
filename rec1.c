#include<stdio.h>
void a(int n);
int main()
{
	a(4);
}
void a(int n)
{
	if(n>0)
	{
	a(n-2);
	printf("%d",n);
	a(n-1);
	
	}
}

