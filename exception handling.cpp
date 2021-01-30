#include <iostream>
using namespace std;
int main()
{
    int x;
	cout<<"Enter number"<<endl;
	l1:
	cin>>x;
	try
	{
		if(x==76)
		throw x;
		cout<<"in try"<<endl;
	}
	catch(...)
	{
		cout<<"hello world";
		
	}
}
