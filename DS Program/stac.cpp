#include<iostream>
using namespace std;
void insert();
void display();
void pop();
struct node
{
 int data;
 struct node *next;
};
struct node *top;
int main()
{
 char c;
 int i;

 top=NULL;
 do
 {
  cout<<"\n1.push\t2.display\t3.pop";
  cout<<"\nenter operation:";
  cin>>i;
  switch(i)
  {
   case 1:
   {
    insert();
    break;
   }
   case 2:
   {
    display();
    break;
   }
   case 3:
   {
    pop();
    break;
   }
   default:
   {
    cout<<"enter valid operation.";
    break;
   } }
  cout<<"do you want to continue(y/n):";
  cin>>c;
 }while(c=='y'||c=='Y');
 return 0;
}
void insert()
{
 struct node *temp;
 temp=new node;
 cout<<"enter data:";
 cin>>temp->data;
 if(top==NULL)
 {
  top=temp;
  top->next=NULL;
 }
 else
 {
  temp->next=top;
  top=temp;
 } }
void display()
{
 struct node *temp;
 temp=top;
 cout<<"data in stack:\n";
 while(temp!=NULL)
 {
  cout<<temp->data;
  temp=temp->next;
  cout<<"\t";
 }
 cout<<"\n";
}
void pop()
{
 int j;
 struct node *temp;
 if(top==NULL)
 { cout<<"stack is empty./underflow."; }
 else
 {
  temp=top;
  top=temp->next;
  delete temp;
 } }
