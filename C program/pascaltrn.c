#include<stdio.h>
int main()
{
	int r,s,k,i,n;

	printf("\n eetre rows \n");
	scanf("%d",&r);
	i=0;
	while(i<r)
	{
		for(s=20-i*3;s>=1;s--)
			printf(" ");
		for(k=0;k<=i;k++)
		{
			if(k==0)
			n=1;
			else
			n=((i-k+1)*n)/k;
			printf("%6d",n);
		}++i;
		printf("\n");
	}
	return 0;
}
