# include<iostream>
class complex
{  float r, i;
public:
complex()
{
r=i=0;
}
void getdata()
{
cout<<”R.P”;
cin>>r;
cout<<”I.P”;
cin>>i;
}
void outdata (char*msg)
{
cout<<endl<,msg;
cout<<”(“<<r;
cout<<”+j” <<i<<”)”;
}
Complex operator+(Complex);
};
Complex complex::Operator+(Complex(2))
{
complex temp;
temp.r=r+c2.r;
temp.i=I=c2.i;
return(temp);
}
void main()
{
complex c1, c2, c3;
cout<<”Enter 2 complex no: “<<endl;
cl.getdta();
c2.getdata();
c3=c1+c2;
c3.outdata (“The result is :”);
return 0;                         }
