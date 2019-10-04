#include<iostream>
using namespace std;

class A
{
	public:
		void geta()
		{
			cout<<"class A"<<endl;
			
		}
};

class B 
{

	public:
		void getb()
		{
			cout<<"class B "<<endl;
		}
		
};

class C : public A,public B
{
	public :
		void getc()
		{
			cout<<"class C"<<endl;
		}
};


int main()
{
	A a;
	a.geta();
	B b;
	b.getb();
//	b.geta();
	C c;
	c.getc();
	c.geta();
	c.getb();
	return 0;
}