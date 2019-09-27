#include<iostream>
using namespace std;
class base
{
public:
base()
{cout<<"contructing base"<<endl;
}
~base(){
cout<<"destructing base"<<endl;
}
};
class derived
{
public:
derived()
{
cout<<"constructing derived"<<endl;
}
~derived()
{
cout<<"destructing derived"<<endl;
}
};
int main()
{
derived *d= new derived();
base *b = d;
delete b;
//getchar();
return 0;
}
