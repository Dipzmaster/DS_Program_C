#include<stdio.h>
void main()
{
int a[6] = {5, 1, 6, 2, 4, 3};
int i,j,key;
for(i=1; i<6; i++)
{
key = a[i];
j = i-1;
while(j>=0&&key<a[j])
{
a[j+1]=a[j];
j--;
}
printf("%d \t",a[j+1]);
a[j+1]=key;
}
printf("\n");
for(i=0;i<6;i++)
printf("%d\t",a[i]);
}
