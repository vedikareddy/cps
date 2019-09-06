#include<stdio.h>
int main()
{
int a,b;
printf("enter the numbers");
scanf("%d%d",&a,&b);
a^=b^=a^=b;
printf("%d%d",a,b);
}
