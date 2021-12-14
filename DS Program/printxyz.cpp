 #include<iostream>
 #include<iomanip>
 int main()
 {
 float x,y,z;
 x=1.0000e+00;
 y=5.0000e-01;
 z=3.3333e-01;
 cout.setf(ios::showpoint);
 cout.precision(3);
 cout.setf(ios::fixed,ios::floatfield);
 cout<<x<<'\n';
 cout<<y<<'\n';
 cout<<z<<'\n';
 }
