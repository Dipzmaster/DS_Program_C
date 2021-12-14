#include<stdio.h>
#include<conio.h>
int n,i=1;
void display(int a[])
{
int i;
printf("\n");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
}
int partition(int a[],int lb,int ub)
{ int up,down;
int temp,pivot;
up=ub;
down=lb+1;
pivot=a[lb];
do {
while((a[down]<pivot) && (down<=ub))
down++;
while((a[up]>pivot) && (up>lb))
up--;
if(down<up)
{
temp=a[down];
a[down]=a[up];
a[up]=temp;
}
display(a);
}
while(down<up);
a[lb]=a[up];
a[up]=pivot;
display(a);
return up;
}
void quicksort(int a[],int lb,int ub)
{
int j;
if(lb<ub)
{
printf("\nIteration %d\n",i);
display(a);
i++;
j=partition(a,lb,ub);
quicksort(a,lb,j-1);
quicksort(a,j+1,ub); }
}
void main()
{
int a[20],i;
clrscr();
printf("\nEnter number of elements: ");
scanf("%d",&n);
printf("\nEnter the unsorted numbers: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("\nThe sorted list: ");
display(a);
getch();
}
