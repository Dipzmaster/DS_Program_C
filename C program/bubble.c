#include<stdio.h>
void main()
{
int a[6] = {5, 1, 6, 2, 4, 3};
int i,flag=0, j, temp;
for(i=0;i<6;i++)
{
for(j=0;j<6-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
}
if(!flag)
{
break;
}
}
for(i=0;i<6;i++)
printf("%d\t",a[i]);
}
