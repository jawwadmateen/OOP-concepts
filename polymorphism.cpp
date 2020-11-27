#include <iostream>
using namespace std;
class car
{
   protected:
   	int speed;
   	public:
   	car(int a)
   	{
   	   speed=a;	
	}
   	void shiftgear()
   	{
   	    speed+=10;
   	    cout<<"Speed of normal car is "<<speed<<endl;
	}
};
class sportscar:public car
{
	public:
	sportscar(int a):car(a)
	{
		
	}
	void shiftgear()
	{
		speed+=25;
		cout<<"Speed of Sports car is "<<speed<<endl;
	}   
};
int main()
{
	car c1(10);
	c1.shiftgear();
	sportscar s1(10);
	s1.shiftgear();
}

