#include<iostream>
using namespace std;
class base
{
int x;
public:virtual void fun()=0;
int getX(){return x;}
};
class derived:public base
{
int y;
public:
void fun(){cout<<"fun() is called";}
};
int main()
{
base *a=new derived();
a->fun();

return 0;
}
