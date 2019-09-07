#include<stdio.h>
int swap(int *a,int *b);
int main()
{
int x,y;
printf("enter the numbers\n");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("%d\n%d\n",x,y);
}
int swap(int *a,int *b)
{
int *temp;
*temp=*a;
*a=*b;
*b=*temp;
}



