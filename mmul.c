#include<stdio.h>
void mul(int a[][5],int b[][5],int p,int q,int r);
void ra(int c[][5],int p,int q);
int i,j;
int main()
{
int x[5][5],y[5][5];
int k,l,o,d;
printf("enter the size of the matrix1");
scanf("%d%d",&o,&d);
printf("enter the size of the matrix2");
scanf("%d%d",&k,&l);
if(d==k)
{
ra(x,o,d);
ra(y,k,l);
mul(x,y,o,l,k);
}
return 0;
}
void ra(int a[][5],int p,int q)
{
printf("enter the matrix");
for(i=0;i<=p;i++)
for(j=0;j<=q;j++)
scanf("%d",&a[i][j]);
}
void mul(int a[][5],int b[][5],int p,int q,int r)
{
int k,sum;
for(i=0;i<=p;i++)
{
for(j=0;j<=q;j++)
{

for(k=0;k<=r;k++)
{
sum=0;
sum=sum+a[i][k]+b[k][j];
}
printf("%d",sum);
}
printf("\n");
}
}



