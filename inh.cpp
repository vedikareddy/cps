#include<iostream>
using namespace std;
class Parent
{
public:
int id_p;
};
class Child:public Parent
{
public:
int id_c;
};
int main()
{
Child obj1;
obj1.id_c=7;
obj1.id_p=91;
cout<<"child"<<obj1.id_c;
cout<<"parent"<<obj1.id_p;
}
