using namespace std;
#include<iostream>
struct Time{
	int hour;
	int min;
	int sec;
};
void printmilitary(const Time &);
void printstandard(const Time &);
int main()
{
	Time dinnertime;
	dinnertime.hour=18;
	dinnertime.min=30;
	dinnertime.sec=0;
	cout<<"dinner will be held at ";
	printmilitary(dinnertime);
	//cout<<"military time, which is";
	//printstandard(dinnertime);
	
	dinnertime.hour=29;
	dinnertime.min=73;
	cout<< "time with invalid values";
	printmilitary(dinnertime);
	cout<< endl;
	return 0;
}
void printmilitary(const Time &t)
{
cout<< (t.hour<10?"0" :"")<<t.hour<<":"<<(t.min<10? "0" :"")<<t.min;
}
