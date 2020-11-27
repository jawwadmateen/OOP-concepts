#include <iostream>
using namespace std;
class sum
{
	private:
	int a;
	int b;
	public:
	sum(int x,int y)
	{
		a=x;
		b=y;
	}
	friend add(sum);
};
add(sum s)
{
	cout<<s.a+s.b;	
}
int main()
{
	sum s2(8,2);
	add(s2);
}
