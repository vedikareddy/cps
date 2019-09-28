#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
void *f1(void *);
void *f2(void *); 
int main()
{
pthread_t tid1,tid2;
pthread_create(&tid1,NULL,f1,NULL);
pthread_create(&tid2,NULL,f2,NULL);
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
printf("\nend of main thread\n");
return 0;
}
void *f1(void *arg)
{
int i=1;

int flag=0;
int num=1;
while(num!=5){
for(int j=1;j<=i;j++)
{
if((i/j)==0)
flag++;
}
if(flag==2)
num++;
i++;
}
printf("5th prime number is %d",i);
} 

void *f2(void *arg)
{
int i=1;

int flag=0;
int num=1;
while(num!=7){
for(int j=1;j<=i;j++)
{
if((i/j)==0)
flag++;
}
if(flag==2)
num++;
i++;
}
printf("7th prime number is %d",i);
} 



