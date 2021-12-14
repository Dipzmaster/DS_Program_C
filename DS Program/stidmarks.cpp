#include<iostream>
class student
{
char name[10];
 int rollno,marks[5],sum,avg;
 public:
 void assign()
 {
 cout<<"enter name of the student";
 cin>>name;
 cout<<"enter rollno";
  cin>>rollno;
   cout<<"enter marks of five subjects";
 for(int i=0;i<5;i++)
 {   cin>>marks[i];  }
  sum=avg=0;
 for(int j=0;j<5;j++)
  {   sum=sum+marks[j];  }
  //cout<<sum;
   avg=sum/5;
   cout<<"Average marks is"<<avg;
    cout<<endl;
    if(avg>=90)
    {   cout<<"stream is Computer"<<endl;  }
       else   {    if(avg>=80 && avg<=89)    {
 cout<<"stream is Electronics";
  }    if(avg>=75 && avg<=79)
  {     cout<<"stream is Mechanical";    }
  if(avg>=70 && avg<=74)
  {     cout<<"stream is Electrical";    }
  }
   }
    };
 void main()
 {
  student s1;
   s1.assign();
   }
