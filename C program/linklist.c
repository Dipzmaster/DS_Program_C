#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*start;
void create()
{
	int x;
	struct node *p1,*p2;
	printf("\n neter data \n");
	scanf("%d",&x);
	if(start==NULL)
	{
		start=(struct node*)malloc(sizeof(struct node));
		start->data=x;
		start->next=NULL;
	}
	else
	{
		p2=start;
		p1=(struct node*)malloc(sizeof(struct node));
		while(p2->next!=NULL)
		{
			p2=p2->next;
		}
		p1->data=x;
		p1->next=NULL;
		p2->next=p1;
	}
}

void insertm()
{
	int pos,i=1,x;
	struct node *p1,*p2;
	printf("\n neter pos you need to insert");
	scanf("%d",&pos);
	printf("\n enter data");
	scanf("%d",&x);
	
	if(pos==1)
	{
	p2=(struct node*)malloc(sizeof(struct node));
	p2->data=x;
	p2->next=start;
	start=p2;
	}
	else
	{
		p2=(struct node*)malloc(sizeof(struct node));
		p1=start;
		while(i<pos-1)
		{
			p1=p1->next;
			i++;
		}
		if(p1->next==NULL)
		{
			p1->next=p2;
			p2->data=x;
			p2->next=NULL;
		}
		else
		{
		
		p2->data=x;
		p2->next=p1->next;
		p1->next=p2;
		}
	}
	
}


void delet()
{
	int pos;
	struct node *t1;
	printf("\n enter data yu need to delete \n");
	scanf("%d",&pos);
	t1=start;
	
}
struct node* rever(struct node *head)
{
	struct node *q=NULL;
	while(head)
	{
		struct node *n=head->next;
		head->next=q;
		q=head;
		head=n;
	}
	return q;
}
void display()
{
	struct node *p1;
	p1=start;
	while(p1!=NULL)
	{
		printf("%d\t",p1->data);
		p1=p1->next;
	}
}
int main()
{
	int ch;
	do
	{
	printf("\n1.creeate 2.dispaly 3.insert 4.delete 5.exit");
	printf("\n enter your choice \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:create();
				break;
		case 2:display();
				break;
		case 3:insertm();
				break;
		case 4:start=rever(start);
			break;
		case 6:delet();
				break;
		case 7:exit(0);
			break;
	}
	
	}while(ch!=5);
return 0;	
}
