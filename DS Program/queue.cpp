#include<iostream>
using namespace std;
void insert();
void delet();
void display();

struct node
{
	int data;
	struct node *next;
};
struct node *temp;
struct node *fend;
struct node *rend;

void insert()
{
	temp=new node;
	cout<<"enter data:";
	cin>>temp->data;
	if(fend==NULL&&rend==NULL)
	{
		temp->next=NULL;
		rend=temp;
		fend=rend;
		rend->next=NULL;
	}
	else if(fend==rend)
	{
		rend->next=temp;
		fend->next=temp;
		rend=temp;
		rend->next=NULL;
	}
	else
	{
		rend->next=temp;
		rend=temp;
		rend->next=NULL;
	}
}
void delet()
{
	temp=new node;
	if(fend==NULL)
	{
		cout<<"QUEUE is empty.\n";
		fend=NULL;
		rend=NULL;
	}
	else
	{
		temp=fend;
		fend=fend->next;
		cout<<"deleted item is:"<<temp->data<<endl;
		delete temp;
	}
}
void display()
{
	temp=new node;
	temp=fend;
	if(rend==NULL)
	cout<<"QUEUE is empty.\n";
	else
	{
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<endl;
	}
}
		
int main()
{
	fend=NULL;
	rend=NULL;
	char k;
	int c;
	do
	{
		cout<<"1.enqueue\t2.dequeue\t3.display";
		cout<<"\nenter your choice:";
		cin>>c;
		switch(c)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				delet();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			default:
			{
				cout<<"enter valid option.";
				break;
			}
		}
		cout<<"do you want to continue?(y/n):";
		cin>>k;
	}while(k=='y'||k=='Y');
	return 0;
}
