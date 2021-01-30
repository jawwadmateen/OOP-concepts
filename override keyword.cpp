#include <iostream>
using namespace std;
class base
{
	public:
	virtual void show()
	{
		cout<<"Base Class"<<endl;	
	}
};
class derived:public base
{
	public:
	virtual void show()override
	{
		cout<<"Derived Class"<<endl;
	}
};
int main()
{
   derived d1;
   base* b1;
   b1=&d1;	
   b1->show();
}
