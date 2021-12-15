#include<stdio.h>
void selectionSort(int a[], int size)
{
int i, j, min, temp;
for(i=0;i< size-1;i++ )
{
min = i; 
for(j=i+1;j<size;j++)
{
if(a[j]<a[min]) 
{
min=j; 
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
int main()
{
	int i;
	int a[6]={5,2,1,3,4,6};
	selectionSort(a,6);
	for(i=0;i<6;i++)
printf("%d\t",a[i]);
return 0;
}
