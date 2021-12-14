#include<iostream>
#include<math.h>
using namespace std;
class coord
{
 float radius,angle,x,y;
  public:
polar(float r, float a);
   void rectangular(float x, float y);
    void display();
    }
    void coord::polar(float r,float a)
    {
    cout<<"\n Enter the radius and angle : ";
     cin>>radius>>angle;
 }
  void coord :: rectangular(float x,float y)
  {  x=radius*cos(angle);  y=radius*sin(angle); }
  void display()
  {
  cout<<"\n The rectangular coordinates are : "<<x<<" and "<<y;  }
  void main()
  {
  coord obj;
  obj.polar();
  obj.rectangular();
  obj.display();
  }
