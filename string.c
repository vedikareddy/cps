#include<stdio.h>
#define null '\0'
int main()
{
char t[6]="WORLD";
int i,j;
for(i=0,j=5;i<j;t[i++]=t[j--])
printf(" first %s\n",t);
printf(" after change %s",t);
}

