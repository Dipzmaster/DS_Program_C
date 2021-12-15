#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public :
		void setv(int x)
		{
			a=x;
		}
		void display()
		{
			
			cout<<"a= "<<a;
		}
		friend int max(A &,B &);
};
class B
{
	int b;
	public :
		void setv(int x)
		{
			b=x;
		}
		void display()
		{
			
			cout<<"a= "<<b;
		}
		friend int max(A &,B &);
};
int max(A &z,B &y)
{
	int temp;
	temp=z.a;
	z.a=y.b;
	y.b=temp;
}
int main()
{
	A a;
	a.setv(23);
	B b;
	b.setv(45);
	cout<<"before swapping"<<endl;
	a.display();
	b.display();
	max(a,b);
	cout<<"\n after sorting";
	a.display();
	b.display();
	return 0;
}
