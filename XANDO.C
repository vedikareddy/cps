#include<stdio.h>
int game(int b[2][2]);
int flag=0;
int main()
{
	int i,j,k,l,x,y,t;
	char a[2][2];
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			a[i][j]='-';
	for(t=0;t<=8;t++)
	{
	scanf("%d%d",&x,&y);
	if(t%2==0)
	a[x][y]='*';
	else
	a[x][y]='o';
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	printf("%c",a[i][j]);
	printf("\n");
	}
	}
}
/*int game(int  b[2][2])
{
if(b[0][0]==b[0][1]==b[0][2]=='o'||b[0][0]==b[0][1]==b[0][2]=='*')
flag=1;
return flag;
}*/
