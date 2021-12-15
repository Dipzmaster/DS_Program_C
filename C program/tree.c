#include<stdio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *left;
	struct node *right;
}*root;
void insert(struct node *root)
{
	int x;
	struct node *p1,*p2;
	printf("\n enter data");
	scanf("%d",&x);
	if(root==NULL)
	{
		root=(struct node*)malloc(sizeof(struct node));
		root->data=x;
		root->right=NULL;
		root->left=NULL; 
	}
	else
	{
		p2=root;
		p1=(struct node*)malloc(sizeof(struct node));
		p1->data=x;
		p1->left=NULL:
		p1->right=NULL;
		while()
		if(p1->data<p2->data)
		{
			p2=p2->left;
			
		}
		
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
		case 1:insert();
				break;
		case 2:inorder();
				break;
		case 3:preorder();
				break;
		case 4:postorder();
				break;
		case 7:exit(0);
			break;
	}
	
	}while(ch!=7);
}
