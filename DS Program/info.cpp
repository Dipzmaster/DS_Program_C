#include<iostream>
class A
{
public:
char name[20];
char sex[10];
int age;
void get_data();
void disp_data();
};
void A::get_data()
{
cout<<"enter d name:";
cin>>name;
cout<<"enter d age:";
cin>>age;
cout<<"enter d sex:";
cin>>sex;
}
void A::disp_data()
{
cout<<"name:"<<name<<'\n';
cout<<"age:"<<age<<'\n';
cout<<"sex:"<<sex<<'\n';
}
class B
{
public:
int bed_number;
char nature_illness[40];
void get_data();
void disp_data();
};
void B::get_data()
{
cout<<"enter d bed_number:";
cin>>bed_number;
cout<<"enter d nature_illness:";
cin>>nature_illness;
}
void B::disp_data()
{
cout<<"bed_number:"<<bed_number<<'\n';
cout<<"nature_illness:"<<nature_illness<<'\n';
}
class C:public A,public B
{
int date_admission;
public: void get_data();
 void disp_data();
 void record(); };
 void C::get_data()
 {
 A::get_data();
 B::get_data();
 cout<<endl<<"Enter Data of Admission:-> ";
  cin>>date_admission;
  } void C::disp_data()
  {  A::disp_data();
  B::disp_data();
  cout<<endl<<"Date of Admission\t"<<date_admission;
  }
  void main()
  {
  clrscr();
   C c1;
   cout<<endl<<"Adding a new record to database\n";
getch();
c1.get_data();
cout<<endl<<"Displaying the added record to database\n";
c1.disp_data();
getch(); }
