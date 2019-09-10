#include<stdio.h>
int main()
{
	char p[30],q[10][10];
	int i,j,k,l=0,m=0;
	*p="vedika is  employee";
	for(i=0;i!='\0';i++)
	{
		if(p[i]==" ")
		{
		j=i;
		for(k=m;k<j;k++)
	         {      
			*(*(q+l)+k)=p[k];	

                 }
		 m=i+2;
		 l++;
		}
        }
	for(i=l;i<0;i++)
	{
	printf("&s",*(q+l));
	printf(" ");
	}
}
