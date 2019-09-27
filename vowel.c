
#include<stdio.h>
int main()
{
char a;
printf("enter the charecter");
char b[]={'a','e','i','o','u','A','E','I','O','U','\0'};
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
printf("its a vowel");
else
printf("its not a vowel");
}


