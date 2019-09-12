#include<stdio.h>
int max=10;
int s[10],top;
top=-1;
int display(int s[max]);
int push(int s[max]);
int pop(int s[max]);
int main()
{
int op;
while(1)
{

printf("1)display,2)push,3)pop,4)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:
display(s);
break;
case 2:
push(s);
break;
case 3:pop(s);break;
case 4:
exit(0);
default:
printf("invalid");
}
}
}

int display(int s[max])
{
int i;
if(top==-1)
printf("stack is empty");
else{
for(i=top-1;i>=0;i--)
printf("%d\n",s[i]);
}
}

int push(int s[max])
{
int a;
if(top==max-1)
printf("stack is full");
else{
printf("enter the element to be added");
scanf("%d",&a);
top++;
s[top]=a;
}
}

int pop(int s[max])
{
if(top==-1)
printf("stack is empty");
else{
top--;
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
