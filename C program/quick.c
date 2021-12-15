#include<stdio.h>
void quicksort(int a[], int p, int r)
{
if(p < r)
{
int q;
q = partition(a, p, r);
printf("%d ",q);
quicksort(a, p, q);
quicksort(a, q+1, r);
}
}
int partition(int a[], int p, int r)
{
int i,j,pivot,temp;
pivot=a[p];
i=p;
j=r;
while(1)
{
while(a[i]<pivot&&a[i]!=pivot)
i++;
while(a[j]>pivot&&a[j]!=pivot)
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
{
return j;
}
}
}

int main()
{
	int i;
	int a[6]={5,2,1,3,4,6};
	quicksort(a,0,5);
	for(i=0;i<6;i++)
printf("%d\t",a[i]);
return 0;
}
