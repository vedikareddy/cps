#include<iostream>
using namespace std;
class player
{
int runs;
int wickets;
public:
player(int r1,int w1)
{
runs=r1;
wickets=w1;
}
player(const player &p1,int w=0)
{
runs=p1.runs;
wickets=0;
}

int getruns()
{ return runs; }
int getwickets()
{ return wickets; }
};

int main()
{
player p0(20,3);
player p1=p0;
cout<<"p[0].x="<<p0.getruns()<<",p[0].y="<<p0.getwickets();
cout<<"\np2.x="<<p1.getruns()<<",p[1].y="<<p1.getwickets();
}

