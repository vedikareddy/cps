/*#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class box()
{
private:
int lenght;
int width;
int height;
public:box()
{
}
};
int boxvolume(int lenght=1,int width=1;int height)*/
 #include<iostream>
using namespace std;
int boxVolume(int length=1,int width=1,int height=1);
int main()
{
cout<<"Default: "<<boxVolume()<<endl
<<"Length 10: Width 1 Height 1 "<<boxVolume(10)<<endl
<<"Length 10: Width 5 Height 1 "<<boxVolume(10,5)<<endl
<<"Length 10: Width 5 Height 2 "<<boxVolume(10,5,2)<<endl;
}
int boxVolume(int length,int width,int height)
{
return length*width*height;
}
