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
		start->next=start;
	}
	else
	{
		p2=start;
		p1=(struct node*)malloc(sizeof(struct node));
		while(p2->next!=start)
		{
			p2=p2->next;
		}
		p1->data=x;
		p1->next=start;
		p2->next=p1;
	}
}
void insertm()
{
	int pos,i=1,x;
	struct node *p1,*p2,*p3;
	printf("\n neter pos you need to insert");
	scanf("%d",&pos);
	printf("\n enter data");
	scanf("%d",&x);
	p3=start;
	if(pos==1)
	{
		while(p3->next!=start)
		{
			p3=p3->next;
		}
	p2=(struct node*)malloc(sizeof(struct node));
	p2->data=x;
	p2->next=start;
	start=p2;
	p3->next=start;
	
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
		if(p1->next==start)
		{
			p1->next=p2;
			p2->data=x;
			p2->next=start;
		}
		else
		{
		
		p2->data=x;
		p2->next=p1->next;
		p1->next=p2;
		}
	}
	
}
void display()
{
	struct node *p1;
	p1=start;
	do
	{
		printf("%d\t",p1->data);
		p1=p1->next;
	}while(p1!=start);
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
		
		case 7:exit(0);
			break;
	}
	
	}while(ch!=7);
return 0;	
}
