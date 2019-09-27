#include<iostream>
using namespace std;
template <typename T>
class arr{
private:
	T *ptr;
	int size;
public:
	arr(T arr[],int s);	
	void print();
};
template<typename T>
arr<T>::arr(T arr[],int s){
ptr= new T[s];
size=5;
for(int i=0;i<size;i++)
ptr[i]=arr[i];
}
template<typename T>
void arr<T>::print(){
for(int i=0;i<size;i++)
cout<<" "<<*(ptr+i);
cout<<endl;
}
int main()
{
int arr1[5]={1,2,3,4,5};
arr<int> a(arr1,5);
a.print();
return 0;
}
