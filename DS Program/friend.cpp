#include<iostream>
using namespace std;
class one;
class two
{
int a;
public:
void setvalue(int n){a=n;}
friend void max(two,one);
};
class one
{
int b;
public:
void setvalue(int n){b=n;}
friend void max(two,one);
};
void max(two s,one t)
{
if(s.a>=t.b)
cout<<s.a;
else
cout<<t.b; }
int main()
{
one obj1;
obj1.setvalue(5);
two obj2;
obj2.setvalue(10);
max(obj2,obj1);
return 0; }
