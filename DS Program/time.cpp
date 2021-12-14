#include<iostream>
#include<string>
class time24
{
 int hours,minutes,seconds;
 public:
 time24()
 {   hours=minutes=seconds=0;  }
 time24(int h,int m,int s)  {   hours=h;   minutes=m;   seconds=s;  }
 void display()
 {
     if(hours<10)
{
    cout<<'0';
     cout<<hours<<":";
}
if(minutes<10)
 {
    cout<<'0';
 cout<<minutes<<":";
 }
  if(seconds<10)
  {cout<<'0';   cout<<seconds;}

   };
   class time12
   {
       bool pm;
       int hour,minute;
public:
    time12()
    {
        pm=true;
   hour=minute=0;
   }
    time12(bool ap,int h,int m)
    {
        pm=ap;
        hour=h;
        minute=m;
        }
time12(time 24);
   void display()
   {
       cout<<hour<<":";
   if(minute<10)    cout<<'0';
    cout<<minute<<" ";
     char *am_pm=pm ? "p.m." : "a.m.";
   cout<<am_pm;  } };
time12::time12(time24 t24)
{  int hrs24=hours;
bool pm=hours<12 ? false:true;
 int min=seconds<30 ? minutes:minutes+1;
if(min==60)
 {    min=0;
 ++hrs24;
  if(hrs24==12 || hrs24==24)
  pm=(pm==true)? false:true;
   }
   int hrs12=(hrs24<13) ? hrs24 : hrs24-12;
    if(hrs12==0)   {    hrs12=12;    pm=false;   }
     return time12(pm,hrs12,min);  }
     int main()
{  int h1,m1,s1;
 while(true)  {
  cout<<"enter 24-hour time:\n";
 cout<<"Hours(0-23):";
  cin>>h1;  if(h1>23)   return(1);
  cout<<"Minutes:";  cin>>m1;
   cout<<"Seconds:";  cin>>s1;
 time24 t24(h1,m1,s1);
  cout<<"you entered:";  t24.display();
 cout<<endl;  time12 t12=t24;
  cout<<"\n12-hour time:";
  t12.display();  cout<<endl;  }  return 0; }
