#include <iostream>
using namespace std;
class person
{
	private:
	int score;
	public:
	person()    
	{
		
	}
	person(int a)   //parametrized constructor 
	{
		score=a;
	}
	person operator --(int)
	{
		person p1;
		p1.score=score--;
	}
	int getscore()
	{
		return score;
	}
};
int main()
{
	person p2(10);  //parametrized constructor is called
	p2--;   //10 will be decremented to 9 
	cout<<p2.getscore();
}
