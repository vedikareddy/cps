#include<stdio.h>
int main()
{
int x=5;
int *y=&x;
int a[10][10];
printf("%d\n",x);
printf("%d\n",y);
printf("%u\n",y);
printf("%u\n",&x);
printf("%d\n",*y);
a[2][3]=8;
printf("%d",a[2][3]);
printf("%d",a[3][2]);
printf("%d",2[a][3]);
printf("%d",3[a][2]);

}
