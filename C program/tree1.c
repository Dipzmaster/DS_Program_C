#include<stdio.h>
#include<malloc.h>
#include<process.h>
#include<math.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
struct node *insert(struct node *r,int n)
{
	
	if(r==NULL)
	{
		r=(struct node*)malloc(sizeof(struct node));
		r->data=n;
		r->left=NULL;
		r->right=NULL;
	}
	else
	{
		if(r->data>n)
		r->left=insert(r->left,n);
		else
		r->right=insert(r->right,n);
	}
	return (r);
}
void inorder(struct node *r)
{

	if(r!=NULL)
	{
		inorder(r->left);
		printf("%d \t",r->data);
		inorder(r->right);
	}	
}
void postorder(struct node *r)
{

	if(r!=NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("%d \t",r->data);
	}	
}
void preorder(struct node *r)
{

	if(r!=NULL)
	{
		printf("%d \t",r->data);
		preorder(r->left);
		preorder(r->right);
	}	
}
void delet(struct node *r,int n)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node*));
	if(r->data>n)
	{
		delet(r->left,n);
	}
	else if(r->data<n)
	{
		delet(r->right,n);
	}
	else if(r->right==NULL&&r->left==NULL)
	{
		
	
	}
	else
	{
		
		if(r->left==NULL)
		{	
			r->data=r->right->data;
			ptr=r->right;
			r->right=NULL;
			free(ptr);
		}
		else if(r->right==NULL)
		{
			r->data=r->left->data;
			ptr=r->left;
			r->left=NULL;
			free(ptr);
	
		}
		else
		{
			ptr=r->left;
			while(ptr->right!=NULL)
			ptr=ptr->right;
			r->data=ptr->data;
			delet(r->left,ptr->data);
		}
	}
	
}
int main()
{
	struct node *root=NULL;
	int ch,n,n1;
	
	do
	{
		printf("\n 1.create 2.inorder 3.postorder 4.preorder 3.exit");
	printf("\n enter your choice\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n enter data to insert\n ");
				scanf("%d",&n);
				root=insert(root,n);
				break;
			case 2:inorder(root);	
				break;
			case 3:postorder(root);	
				break;
			case 4:preorder(root);	
				break;
			case 5:printf("\n enter element to be deleted\n");
				scanf("%d",&n1);
			delet(root,n1);
		}
	
	}while(ch<6);
}

