#include<iostream>
using namespace std;
static count=1;
class batsmen
{
	private:
	int runs;
	public:
	batsmen()
	{
	count++;
	}
	void ipl();
	void icc();
	void wc();
	void odi();
};
	

void ipl()
{
	batsmen a[1];
}
	void icc()
{
	batsmen b[2];
}
	void wc()
{	
	batsmen c[4]; 
}
	void odi()
{
	batsmen  d[10];
}

void batsmen::score()
{
	void ipl();
	void icc();
	void wc();
	void odi();
}
int main()
{
batsmen batsmen;
batsmen.score();
cout<<count<<endl;
}
