#include <iostream>
using namespace std;
class multiply
{
	protected:
	int a,b;
	public:
	int multi(int c,int d)
	{
	   	a=c;
	   	b=d;
	   	cout<<"Base class is called "<<endl;
	   	return a*b;
	}
		
};
class multiply1:public multiply
{
	public:
	int multi(int x,int y)
	{
		a=x;
		b=y;
		cout<<"Child Class is called"<<endl;
		return a*b;
	}
	
};
int main()
{
	multiply m1;
	m1.multi(3,4);
	multiply1 m2;
	m2.multi(3,4);
}
