#include<iostream>
using namespace std;
class Parent
{
protected:
int id_p;
};
class Child:public Parent
{
public:
void setid(int id)
{
id_p=id;
}
void display()
{
cout<<id_p<<endl;
}
}
};
int main()
{
Child obj;
obj.setid(80);
obj.display();
return 0; 
}


