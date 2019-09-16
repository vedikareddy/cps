#include<iostream>
#include<cstring>
using namespace std;
class str
{
public:
	string a;
	string b;
	void add();
};
void str::add()
{
strcat(a,b);
cout<<a<<endl;
}

int main()
{
str x;
x.a="hello";
x.b="world";
x.add();
}
