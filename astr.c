#include<stdio.h>
#include<string.h>
int main()
{
char a[10]="vedika";
char b[10];
char c[10];
char d[10]="di";
char e[10];
strcpy(b,a);
printf("%s\n",b);
printf("%d\n",strlen(a));
memset(c,0,10);
strncpy(c,a,3);
printf("%s\n",c);
e=strstr(a,d);
printf("%s\n",e);
}
