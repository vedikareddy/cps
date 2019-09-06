#include<stdio.h>
void ved1();
void ved2();
#pragma startup ved1
#pragma exit ved2
void ved1()
{
printf("ved1");
}
void ved2()
{
printf("ved2");
}
void main()
{
printf("vedmain");
}

