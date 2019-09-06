#include<stdio.h>
void ra(int x[2][2]);
void adda(int p[2][2],int q[2][2]);
int i,j;
int main()
{
	int a[2][2],b[2][2];
	printf("enter the elements of arrays");
	ra(a);
	ra(b);
	adda(a,b);
	return 0;
}
void ra(int x[][2])
{
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	scanf("%d",&x[i][j]);
}
void adda(int p[][2],int q[][2])
{
	for(i=0;i<=2;i++)
{
	for(j=0;j<=2;j++)
	printf("%d",p[i][j]+q[i][j]);
	printf("\n");
}
}


