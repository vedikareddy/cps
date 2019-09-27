/*#include<iostream>
#include<ctime>
#include<cstdlib>
using std::endl;
using std::cout;
using std::cin;
int rolldice(void);
int main()
{
enum status{CONTINUE,WON,LOST};
int sum,mypoint;
status gamestatus;
srand(time (0));
sum=rolldice();
switch(sum)
{
case 7:
case 11:
gamestatus=WON;
break;
case 2:
case 3:
case 12:
gamestatus=LOST;
break;
default:
gamestatus=CONTINUE;
mypoint=sum;
cout<<"point is"<<mypoint<<endl;
break;
}
while(gamestatus==CONTINUE){
sum=rolldice();
if(sum==mypoint)
gamestatus=WON;
else
if(sum==7)
gamestatus=LOST;
}
if(gamestatus==WON)
cout<<"player wins"<<endl;
else
cout<<"player loses"<<endl;
return 0;
}
int rolldice(void)
{
int die1,die2,worksum;
die=1+rand()%6;
die2=1+rand()%6;
worksum=die1+die2;
cout<<"player rolled"<<die1<<"+"<<die2
<<"="<<worksum<<endl;
return worksum;
}
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int rollDice(void);
int main()
{
enum Status{CONTINUE,WON,LOST};
int sum,myPoint;
Status gameStatus;
srand(time(0));
sum=rollDice();
switch(sum)
{
case 7:
case 11:
gameStatus=WON;
break;
case 2:
case 3:
case 12:
gameStatus=LOST;
break;
default:
gameStatus=CONTINUE;
myPoint=sum;
cout<<"Point is"<<myPoint<<endl;
break;
}
while(gameStatus==CONTINUE)
{
sum=rollDice();
if(sum==myPoint)
gameStatus=WON;
else
if(sum==7)
gameStatus=LOST;
}
if(gameStatus==WON)
cout<<"Player wins"<<endl;
else
cout<<"Player loses"<<endl;
return 0;
}
int rollDice(void)
{
int die1,die2,workSum;
die1=1+rand()%6;
die2=1+rand()%6;
workSum=die1+die2;
cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<workSum<<endl;
return workSum;
}
