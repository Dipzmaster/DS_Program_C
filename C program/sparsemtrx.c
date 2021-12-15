#include<stdio.h>
typedef struct node 
{
	int row,column,val;
}matrix;
int main()
{
	int i,j;
	int count1=0;
	int count2=0;
	int m[100][100],m1[100][100];
	int n[100][100],m2[100][100];
	int r,c;
	printf("\n enter the magnitude of matrix m\n");
	scanf("%d %d",&r,&c);		
	printf("eneter matrix 1 \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
			if(m[i][j]!=0)
			count1++;
		}
	}
	if(count1>((r*c)/2))
	{
		printf("m1 is not sparse matrix");
		
	}
	else
	{
	printf("\n enter matrix 2 \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&n[i][j]);
			if(m[i][j]!=0)
			count2++;
		}
	}
	if(count2>(r*c)/2)
	{
		printf("m2 is not sparse matrix");
		
	}
	}
	m1[0][1]=r;
	m1[0][2]=c;
	m1[0][3]=count1;
	for(i=1,k=0;i<=count1;k++,i++)
	{
		for(j=0,l=0;j<3;l++,j++)
		{
			if(m[k][l]!=0)
			{
				m1[i}[0]=k;
				m1[i][1]=l;
				m1[i][2]=m[k][l];
			}
		}
	}
	m2[0][1]=r;
	m2[0][2]=c;
	m2[0][3]=count2;
	for(i=1;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(n[i-1][j]!=0)
			{
				m2[i][0]=i-1;
				m2[i][1]=j;
				m2[i][2]=n[i-1][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",m1[i][j]);
			
		}
		printf("\n");
	}
}

