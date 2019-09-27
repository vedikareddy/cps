#include<iostream>
using namespace std;
int main()
{
int x,y;
int *const  ptr=&x;
*ptr=10;
ptr=&x;
return 0;
}
