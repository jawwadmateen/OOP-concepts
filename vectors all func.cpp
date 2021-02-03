#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i,j,k;
	vector<int>v3(10);
	vector<int>::iterator t1=v3.begin();
	//v1.insert(t1+2,60);
	for(i=0;i<v3.size();i++)
	{
	    v3[i]=2*i;
	}
}
