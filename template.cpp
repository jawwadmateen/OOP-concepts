#include <iostream>
using namespace std;
template <class X,class Y>
X sum(Y a,X b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int main()
{
	cout<<sum(9.9,10);
}
