#include<iostream>
#include<conio.h>
#include<process.h>
struct Node
{ int data;
Node *next;
}*rear,*front;
void Create();
void AddItem();
void DeleteItem();
void Display();
void main()
{
int ch=0;
Create();
clrscr();
while(ch!=4)
{ cout<<"\n1. Add  item"; cout<<"\n2. Delete item";
cout<<"\n3. Display"; cout<<"\n4. Quit";
cout<<"\n Enter choice";
cin>>ch;
switch(ch)
{
case 1: AddItem();
break;
case 2:
DeleteItem();
break; case 3:
Display();
break;
}
 }
  }
  void Create()
  {
  front=rear=NULL;
  }
  void AddItem()
  {
  Node *p=new Node;
  cout<<"\n Enter the data:";
  cin>>p->data;
  p->next=NULL;
  if(front==NULL)
  {
  front=rear=p;
  }
  else
  {
  rear->next=p;
  rear=p;
  } }
  void DeleteItem()
  {
  if(front==NULL)
  {
  cout<<"\nQueue is empty";
  return;
  }
  if(front==rear)
  {
  cout<<endl<<front->data<<" is deleted";
  delete front;
   front=rear=NULL;
   }
   else
   {
   Node *p=front;
   cout<<endl<<front->data<<" is deleted";
front=front->next;
delete p;
} }
void Display()
{
Node *p=front;
 while(p!=NULL)
 {
 cout<<"\n"<<p->data;
 p=p->next; }}
