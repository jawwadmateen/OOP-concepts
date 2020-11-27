#include <iostream>
using namespace std;
class ABC
{
	private:
	int a,b;
	public:
	ABC(int x,int y)
	{
		a=x;
		b=y;
	}
	friend class XYZ;
};
class XYZ
{
	public:
	void display(ABC a1)
	{
		cout<<a1.a+a1.b;
	}
	
};
int main()
{
	ABC a3(1,1);
	XYZ x1;
	x1.display(a3);
	
}
