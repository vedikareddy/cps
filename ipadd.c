#include<stdio.h>\
#include<string.h>
int main()
{
char p[20];
int a[5];
gets(p);
int i=0;
char *token=strtok(p,'.');
while(token!=NULL)
{
a[i]=int(token);
i++;
}


}
