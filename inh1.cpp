#include<iostream>

using namespace std;
class p1
{
public:
p1()
{
cout<<"parent1"<<endl;
}
};


class c1:public p1
{
public:
c1()
{
cout<<"child1"<<endl;
}
};
class c2:public c1
{
public:
c2()
{
cout<<"child2"<<endl;
}
};
int main()
{
c2 obj;
return 0;
}

