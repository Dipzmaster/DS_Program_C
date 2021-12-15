#include<stdio.h>

void merge(int a[], int p, int q, int r)
{
int b[5]; //same size of a[]
int i, j, k;
k = 0;
i = p;
j = q+1;
while(i <= q && j <= r)
{
if(a[i] < a[j])
{
b[k++] = a[i++]; // same as b[k]=a[i]; k++; i++;
}
else
{
b[k++] = a[j++];
}
}
while(i <= q)
{
b[k++] = a[i++];
}
while(j <= r)
{
b[k++] = a[j++];
}
for(i=r;i>= p;i--)
{
a[i] = b[--k]; // copying back the sorted list to a[]
}
}
void mergesort(int a[], int p, int r)
{
int q;
if(p < r)
{
q = (p+r)/2;
mergesort(a, p, q);
mergesort(a, q+1, r);
merge(a, p, q, r);
}
}

int main()
{
	int i;
	int a[6]={5,2,1,3,4,6};
	mergesort(a,0,5);
	for(i=0;i<6;i++)
printf("%d\t",a[i]);
return 0;
}
