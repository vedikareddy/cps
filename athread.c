#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
void *f1(void *arg);
int main(int argc,char* argv[])
{
char* msg[]={"thread1","thread2","thread3","thread4","thread5"};
pthread_t tids[5];
for(int i=0;i<5;i++){
pthread_create(&tids[i],NULL,f1,(void*)msg[i]);
pthread_join(tids[i],NULL);
}
printf("main():reporting that all child threads have terminated\n");
exit(0);
}

void *f1(void* arg)
{
sleep(50);
printf("iam child %s\n",(char*)arg);
pthread_exit(NULL);
}

