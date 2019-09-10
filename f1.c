#include<stdio.h>
#include<string.h>
int main()
{
char *p[]={"hello","good","morning"};
printf("%s\n",*p+1);
printf("%s\n",*(p+1));
printf("%s\n",(*(p+2)+1));
printf("%s\n",(*(p+1)+7));
}
