#include<iostream>
using namespace std;
int square(int x){return x*x;}
double square(double y){return y*y;}
int main()
{
cout<<square(7)<<square(7.5)<<endl;
}
