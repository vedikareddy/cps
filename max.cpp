#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int maximum(int,int,int);
int main()
{
int a,b,c;
cout<<"enter the numbers";
cin>>a>>b>>c;

cout<<"maximum is"<<maximum(a,b,c)<<endl;
}
int maximum(int a,int b,int c)
{
/*if(a>b)
	{
	if(a>c)
	return a;
	else
	return c;
	}
else
	{
	if(b>c)
	return b;
	else
	return c;
	}*/
int max;
max=(a>b)?(a>c?a:c):(b>c?b:c);
return max;
}

