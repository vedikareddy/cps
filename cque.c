#include<stdio.h>
# define max 5
int cque[max],front,rear;
front=-1;
rear=-1;
int display(int cque[max]);
int enqueue(int cque[max]);
int dequeue(int cque[max]);
int main(){
int op;

while(1){
printf("enter the option 1)display 2)enqueue 3)dequeue 4)exit\n ");
scanf("%d",&op);
switch(op)
{
case 1:display(cque);
break;
case 2:enqueue(cque);
break;
case 3:dequeue(cque);
break;
case 4:exit(0);
default:printf("invalid option");
}
}
}

int display(int cque[max])
{
int i;
if(rear==-1)
printf("queue is empty");
else{
if(rear>=front)
{
for(i=front;i<=rear;i++)
printf("%d",cque[i]);}
else
{
for(i=front;i<=max;i++)
printf("%d",cque[i]);
for(i=0;i<rear;i++)
printf("%d",cque[i]);}
}
}
int enqueue(int s[max])
{
int a;
if(rear==max-1){
rear=0;
printf("enter the element to be added");
scanf("%d",&a);
rear++;
s[rear]=a;
}
else{
if(front==-1)
front=0;

printf("enter the element to be added");
scanf("%d",&a);
rear++;
s[rear]=a;
}
}

int dequeue(int s[max])
{
if(front==rear)
printf("stack is empty");
else{
if(rear>=front){
front++;
printf("element deleted");}
else{
front=0;
front++;
printf("element deleted");}
}}

