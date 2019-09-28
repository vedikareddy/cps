#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
if(argc!=2){
printf("enter 1 arg\n");
exit(1);
}
pid_t cpid;
int n=atoi(argv[1]);
int i;
for(i=1;i<=n;i++){
fork();
}

fprintf(stderr,"pid=%ld,ppid=%ld\n",(long)getpid(),(long)getppid());
while(1);

exit(0);
}
