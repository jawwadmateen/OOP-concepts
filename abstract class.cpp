#include <iostream>
using namespace std;
class shape
{
   protected:
    int a;
    int b;
   public:
   	virtual int area()=0;
   	void display()
   	{
   		cout<<"Hello World "<<endl;
	   }
   	
};
class rect:public shape
{
	public:
	int area()
	{
		return a*b;
	}
};
class square:public shape
{
	public:
	square(int a)
	{
		this->a=a;
	}
	int area()
	{
		return a*a;
	}
};
int main()
{
	square s1(10);
	cout<<s1.area();
	cout<<s1.display();
}
