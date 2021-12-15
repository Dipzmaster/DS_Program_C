#include<stdio.h>
void main()
{
	int i,j,r,c,k;
	int a[10][10];
	int t[10][10];
	printf("\n neter number of rows and column\n");
	scanf("%d%d",&r,&c);
	printf("\n neter matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<r;j++)
	{
		for(i=0;i<c;i++)
		{
			t[j][i]=a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(k=0,j=c-1;j>=0;k++,j--)
		{
			a[i][k]=t[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
