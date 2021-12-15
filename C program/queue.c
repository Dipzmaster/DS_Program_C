#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next,*prev;
}*rear,*front;
void enqueue()
{
	int n;
	struct node *t1;
	printf("\n enter data");
	scanf("%d",&n);
	if(rear==NULL&&front==NULL)
	{
		rear=(struct node*)malloc(sizeof(struct node));
		front=(struct node*)malloc(sizeof(struct node));
		front->data=n;
		front->next=NULL;
		rear=front;
	}
	else
	{
		t1=(struct node*)malloc(sizeof(struct node));
		t1->data=n;
		t1->next=NULL;
		rear->next=t1;
		rear=rear->next;
		rear=t1;
	}
	
}
void dequeue()
{
	if(front==NULL)
	{
		printf("\n queue already empty ");
	}
	else
	{
	struct node *t2;
	t2=front;
	front=front->next;
	free(t2); 
	}
}
void display()
{
	struct node *t1;
	t1=front;
	while(t1!=NULL)
	{
		printf("%d\t",t1->data);
		t1=t1->next;
	}
}
int main()
{
	int ch;
	do{
	printf("\n 1. enqueue 2. dequeue 3. diaplay 4.exit \n");
	printf("\n netrer your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:enqueue();
				break;
		case 2: dequeue();
				break;
	case 3: display();
				break;
		case 4: exit(0);
			break;
	}
	}while(ch<5);
}
