#include<iostream>
using namespace std;
class employee{
private:
	string name;
	int ecode;
	int ss;
	float salary;
public:
	employee();
	void setvalue(string,int,int,float);
	float hra(float);
	float bs(float,float);
	void sales(float,float);
};
employee::employee(){name="vijay";ecode=0000;ss=0;salary=0.0;}

void employee::setvalue(string n,int ec,int s,float sl)
{
	name=n;
	ecode=ec;
	ss=s;
	salary=sl;
}

float employee::hra(float salary)
{
	float x;
	x=0.3*salary;
	return x;
}

float employee::bs(float hr,float salary)
{
	float x;
	x=hr+salary;
	if(x>500000)
	x=x+100000;
	cout<<x;
	return x;
}

void employee::sales(float ss,float ctc)
{
	if(ss>2000000)
	ctc=ctc+0.1*ss;
	cout<<ctc;
}
int main()
{
	employee e;
	float ctc,a;
	string name;
	int ec,ss;
	float sal;
	cout<<"enter the name\n";
	cin>>name;
	cout<<"enter the id\n";
	cin>>ec;
	cout<<"enter the sales\n";
	cin>>ss;
	cout<<"enter the salary\n";
	cin>>sal;
	e.setvalue(name,ec,ss,sal);
	a=e.hra(sal);
	ctc=e.bs(a,sal);
	e.sales(ss,ctc);
}
/*
#include<iostream>
using namespace std;

class employee
{ 
int eno;
char ename[20];
float bs;
float hra;
float sales;
float ctc;

public:
void getdetails();
void findnetsal();
void showempdetails();


};

void employee::getdetails()
{
cout<<"\nEnter Employee No:";
cin>>eno;
cout<<"\nEnter Employee Name:";
cin>>ename;
cout<<"\nEnter Employee basic salary:";
cin>>bs;
cout<<"\n Enter Sales:";
cin>>sales;
}
void employee::findnetsal()
{
ctc=0;
hra=0.3*bs;
if((bs+hra)>500000)ctc=ctc+100000;
if(sales>2000000)ctc=ctc+(0.1*sales);
ctc=ctc+bs+hra;
}
void employee::showempdetails()
{
cout<<"\nEmp Name:"<<ename;
cout<<"\nEmp No:"<<eno;
cout<<"\nbs:"<<bs;
cout<<"\nhra:"<<hra;
cout<<"\nsales:"<<sales;
cout<<"\nctc:"<<ctc;

}

int main()
{
int i,n;
cout<<"\nEnter no of Employees ";
cin>>n;
employee e[n];

for(i=0;i<n;i++)
{
e[i].getdetails();
e[i].findnetsal();
e[i].showempdetails();
}
return 0;
}
*/	
	


