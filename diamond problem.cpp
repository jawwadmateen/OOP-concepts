#include <iostream>
using namespace std;
class book
{
  private:
  string name;
  public:
  book(string a)
  {
  	name=a;
  }
  void display()
  {
  	cout<<"Name of book is "<<name<<endl;
  }
  
};
 class genre:virtual public book
{
	private:
	int nop;
	public:
	genre(string a,int b):book(a)
	{
		nop=b;
	}
 void display()
	{
		book::display();
		cout<<"number of pages "<<nop<<endl;
	}
};
 class  popu:virtual public book
{
	private:
	string rb;
	public:
	popu(string a,string c):book(a)
	{
		rb=c;
	}
	void display()
	{
		book::display();
		cout<<"reviewed by "<<rb<<endl;
	}
};
class specs:public genre,public popu
{
	private:
	int ncs;
	public:
	specs(string a,int b,string c,int d):book(a),popu(a,c),genre(a,b)
	{
		ncs=d;
	}
	void display()
	{
		cout<<"Name of Book "<<name<<endl;
		cout<<"Number of pages "<<nop<<endl;
		cout<<"Reviewed By "<<rb<<endl;
		cout<<"Number of copies sold "<<noc<<endl;	
	}	
};
int main()
{
	specs s1("Sherlock",900,"Henry",98000);
	s1.display();
}
