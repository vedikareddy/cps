#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcnt1.h>
int main()
{
char buff[2000];
int fd= open("/etc/passwd",O_RDONDLY);
//in read mode
int n;
for(;;)
{
n=read(fd,buff,1000);
if(n<=0)
{
close(fd);
return 0;
}
write(1,buff,n);
}
return 0;
}

