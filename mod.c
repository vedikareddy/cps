#include<stdio.h>
int mod(int a,int b);
int main()
{
int x,y,ans;
printf("enter the numbers");
scanf("%d%d",&x,&y);
ans=mod(x,y);
printf("%d",ans);
}
int mod(int a,int b){
return a%b;
}


