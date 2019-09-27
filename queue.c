#include<stdio.h>
int max=10;
int s[10],rear,front;
rear=-1;
front=-1;
int display(int s[max]);
int enqueue(int s[max]);
int dequeue(int s[max]);
int main()
{
int op;
while(1)
{

printf("1)display,2)enqueue,3)dequeue,4)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:
display(s);
break;
case 2:
enqueue(s);
break;
case 3:dequeue(s);break;
case 4:
exit(0);
default:
printf("invalid");
}
}
}

int display(int s[max])
{
int i,j;
if(rear==-1)
printf("queue is empty");
else{
for(i=front;i<=rear;i++)
printf("%d\n",s[i]);
}
}

int enqueue(int s[max])
{
int a;
if(rear==max-1)
printf("stack is full");
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
front++;
printf("element deleted");
}}



















/*#include<stdio.h>
int push(int a[10],int top);
int pop(int a[10],int top);
int top=0,i;
void main()
{
int a[10];
char c;
do{ 
printf("1)push2)pop");
scanf("%d",&i);
switch(i){
case 1:push(a,top);break;
case 2:pop(a,top);break;}
printf("1 or 0?");
scanf("%c",&c);
}while(c!=1);

}
int push(int a[10],int top){
printf("enter the element");
scanf("%d",&a[top]);
top++;
for(i=0;i<top;i++)
printf("%d",a[i]);
return top;
}
int pop(int a[20],int top){
top--;
for(i=0;i<top;i++)
printf("%d",a[i]);
return top;
}
*/
