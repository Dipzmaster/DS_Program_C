#include<stdio.h>
struct emp
{
	int no;
	char name[20];
	int sal;
};
int main()
{
	int i,j;
	struct emp temp;
	struct emp e[5];
	printf("\n enter emp details \n");
	printf("\n enter num\n");
	for(i=0;i<5;i++)
	scanf("%d",&e[i].no);
	printf("\n enter name\n");
	for(i=0;i<5;i++)
	scanf("%s",&e[i].name);
	printf("\n enter salary\n");
	for(i=0;i<5;i++)
	scanf("%d",&e[i].sal);
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(e[j].sal>e[j+1].sal)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	printf("%d \t",e[i].no);;
	printf("\n");
	for(i=0;i<5;i++)
	printf("%s \t",e[i].name);;
	printf("\n");
	for(i=0;i<5;i++)
	printf("%d \t",e[i].sal);;
	
	
		
}
