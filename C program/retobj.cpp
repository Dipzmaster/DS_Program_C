#include<iostream>
using namespace std;
class A
{
	int a,c;
	public:
		void get(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<a<<"\t";;
		}
		friend A sqr(A);
};
A sqr(A a1)
{
	A a3;
	a3.c=a1.a*a1.a;
	return (a3);
}
int main()
{
	A aa,ab;
	aa.get(2);
	aa.display();
	ab=sqr(aa);
	ab.display();
}
