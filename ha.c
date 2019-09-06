#include<stdio.h>
int add(int x,int y);
int main()
{
int a,b,sum;
printf("enter the numbers");
scanf("%d%d",&a,&b);
sum=add(a,b);
printf("%d",sum);
}
int add(int x,int y)
{
if (!x)
return y;
else
return add(x&y<<1,x^y);
}



