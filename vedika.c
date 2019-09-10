#include<stdio.h>
char scopy(char *x,char *y);
char scmp(char *x,char *y);
char subs(char *x,char *y);
int i,j;
int main()
{
	char a[10]="vedika";
	char b[10];
	char c[10]="di";
	printf("%s\n",a);
	printf("string is copied\n");
	scopy(&a,&b);
	printf("string is compared\n");
	scmp(&a,&c);
	printf("sub string search done\n");
	subs(&a,&c);
}
char scopy(char *x,char *y)
{
	for(i=0;x[i]!='\0';i++)
	{
	y[i]=x[i];
	}
	y[i+0]='\0';
	printf("%s\n",y);
}
char scmp(char *x,char *y)
{	int flag=0,n,m;
	m=sizeof(x);
	n=sizeof(y);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
	if(x[i]==y[i])
	flag++;
	}
	if(flag==n)
	printf("strings are similar\n");
	else
	printf("strings are different\n");
        }
	else
	printf("strings are different\n");
}
char subs(char *x,char *y)
{       int flag=1,m,n;
	m=sizeof(x);
	n=sizeof(y);
	for(i=0;i<m-n;i++)
	{
	if(x[i]==y[0])
	   {    for(j=1;j!=n;j++)
		{
		i++;
		  if(x[i]==y[j])
		  {
		   flag++;
                  }
		}
            }
	}
	if(flag==n)
	printf("substring  found");
	else
	printf("substring not found");
}

