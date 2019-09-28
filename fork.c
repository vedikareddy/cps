#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int cpid=fork();
if(cpid==0)
printf("child");
else
printf("parent");
return 0;
}
