#include<stdio.h>
int main()
{
char a;
printf("select the captain from the options given below 1.virat 2.ms dhoni 3.bumrah 4 hardik");
printf("enter the option");
scanf("%c",&a);
switch(a)
{
case '1': 
printf("yes virat kohli is the captain");
break;
case '2':
printf("no ms dhoni is the old captain");
break;
case '3':
printf("no bumrah is a bowler");
break;
case '4':
printf("no hardik is a batsman");
break;
default:
printf("pls select trhe options below");
break;
}
}

