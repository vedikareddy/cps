#include<iostream>
using namespace std;
#define pi 3.14
class area
{

public:
carea(){
int x=1;
int y=1;
int r=1;
}
carea(int x,int y)
{
cout<<x*y<<endl;
}
carea(int x)
{
cout<<x*x<<endl;
}
carea(int r)
{
cout<<pi*r*r<<endl;
}
};



int main()
{

carea(2,3);
carea(5);
carea(1.5);
} 

