#include <iostream>
using namespace std;
class sum
{
   private:
   int a,b,m,n,p;
   float c,d;
   public:
   int add(int g,int h)
   {
   	a=g;
   	b=h;
   	return a+b;
   }
   double add(double j,double k)
   {
   	  c=j;
   	  d=k;
   	  return c+d;
   }
   int add(int x,int y,int z)	
   {
   	  m=x;
   	  n=y;
   	  p=z;
	  return m+n+p; 
   }  
};
int main()
{
	sum s1;
	cout<<s1.add(3,2,1)<<endl;
	cout<<s1.add(1,2)<<endl;
	cout<<s1.add(1.0,7.9);
	
	
}
