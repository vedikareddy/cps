
/*class foo
{
private:
int data;
public:
void memfunc(int d);
{
data=d;
}
};*/
/*using namespace std;
#include<iostream>
using std::cout;
using std::endl;
class Time{
public:
	Time();
	void setTime(int,int,int);
	void printmilitary(const Time &);
	void printstandard(const Time &);
private:
	int hour;
	int min;
	int sec;
};
Time::Time(){ hour=min=sec=0;}
void Time::setTime(int h,int m,int s)
{
	hour=(h>=0&& h< 24)?h:0;
	min=(m>=0&& s<60)?m:0;
	sec=(s>=0&&s<60)?s:0;
}
void Time::printmilitary()
{
	cout<< (t.hour<10?"0" :"")<<t.hour<<":"<<(t.min<10? "0" :"")<<t.min;
}
/*void Time::printstandard()
{
cout<<((hour==0||hour==12)?12:hour%12)
<<":"<<(minute<10
int main()
{
	Time t;
t.printmilitary();
	return 0;
}*/
/*using namespace std;
class Time
{
private:
int hour;
int minute;
int second;
public:
Time();
void setTime(int,int,int);
void printMilitary();
void printStandard();
};

Time::Time(){hour=minute=second=0;}

void Time::setTime(int h,int m,int s)
{
hour=(h>=0 && h<24)?h:0;
minute=(m>=0 && m<60)?m:0;
second=(s>=0 && s<60)?s:0;


}

void Time::printMilitary()
{

cout<<(hour<10?"0":"")<<hour<<":"<<(minute<10?"0":"")<<minute;

}
void Time::printStandard()
{
cout<<((hour==0 ||hour==12)?12:hour-12)<<":"<<(minute<10?"0":"")<<minute<<":"<<(second<10?"0":"")<<second<<(hour<12?"AM":"PM");

}
int main()
{
Time t;

t.setTime(12,0,0);
cout<<"military time is:";
t.printMilitary();
cout<<"standard time is:";
t.printStandard();

}
*/
#include<iostream>
using namespace std;
class Time
{
private:
int hour;
int minute;
int second;
public:
Time();
void setTime(int,int,int);
void printMilitary();
void printStandard();
};

Time::Time(){hour=minute=second=0;}

void Time::setTime(int h,int m,int s)
{
hour=(h>=0 && h<24)?h:0;
minute=(m>=0 && m<60)?m:0;
second=(s>=0 && s<60)?s:0;


}

void Time::printMilitary()
{

cout<<(hour<10?"0":"")<<hour<<":"<<(minute<10?"0":"")<<minute;

}
void Time::printStandard()
{
cout<<((hour==0 ||hour==12)?12:hour-12)<<":"<<(minute<10?"0":"")<<minute<<":"<<(second<10?"0":"")<<second<<(hour<12?"AM":"PM");

}
int main()
{
Time t;

t.setTime(12,30,10);
cout<<"military time is:";
t.printMilitary();
cout<<"\nstandard time is:";
t.printStandard();
t.setTime(99,99,99);
cout<<"\nafter attempting invalid time:";
t.printStandard();
return 0;
}
