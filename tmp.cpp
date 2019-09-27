#include<iostream>
using namespace std;
template<typename T>
T mymax(T x,T y)
{
	return (x>y)?x:y;
}
int main()
{
cout<<mymax<int>(7,3)<<endl;
cout<<mymax<double>(7.7,9.9)<<endl;
cout<<mymax<char>('a','b')<<endl;
return 0;
}
