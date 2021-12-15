#include<iostream>
#include<conio.h>
using namespace std;
class Sample
{
		int a,b;
	public:
		void set()
		{
			a=20;
			b=40;
		}
		friend float mean(Sample s);
};
float mean(Sample s)
{
	return float(s.a+s.b)/2.0;
}
int main()
{
	Sample X;
	X.set();
	cout<<"mean value is:"<<mean(X);
	return 0;	
}
