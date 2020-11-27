#include <iostream>
using namespace std;
class person
{
  private:
  string name;
  string nationality;
  string religion;
  public:
  person(string a ,string b,string c)
  {
    name=a;
    nationality=b;
    religion=c;
  }	
  void display()
  {
  	cout<<"Name "<<name<<endl;
  	cout<<"Nationality "<<nationality<<endl;
  	cout<<"Religion "<<religion<<endl; 	
  }
};
class education:public person
{
	private:
    int mmarks;
    int intermarks;
    int gpa;
    string field;
    public:
    education(string a,string b,string c,int d,int e,int f,string g):person(a,b,c)
    {
    	mmarks=d;
    	intermarks=e;
    	gpa=f;
    	field=g;
	}
	void display()
	{
		person::display();
		cout<<"Matric/O-Level Marks "<<mmarks<<endl;
		cout<<"INtermedeiate/A-Level marks "<<intermarks<<endl;
		cout<<"University Field "<<field<<endl;
		cout<<"University GPA "<<gpa<<endl;
	}	
};
class employee:public education
{
	private:
	int id;
	string department;
	public:
	employee(string a,string b,string c,int d,int e,int f,string g,int h,string i):education(a,b,c,d,e,f,g)
	{
		id=h;
		department=i;
	}
	void display()
	{
		education::display();
		cout<<"Employee id "<<id<<endl;
		cout<<"Employee Department "<<department<<endl;	
	}		
};

int main()
{
	employee e1("Jawwad","Pakistani","Muslim",990,876,3,"CS",190,"SEO");
	e1.display();
	
}
