#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int gvar=555;
int main()
{
int lvar=54;
int cpid= fork();
if(cpid==0)
	printf("child pid=%ld,gvar=%d,lvar=%d a\n",(long)getpid(),gvar,lvar);
else
	printf("parent pid=%ld,gvar=%d,lvar=%d\n",(long)getpid(),gvar,lvar);
return 0;
}
