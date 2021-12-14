#include<iostream>
using namespace std;
void num(int [][50],int);
int x,y,i,j;
int main()
{
int a[50][50],s[50][3],c=0;
cout<<"\nEnter num of rows and colums:\n";
cin>>x>>y;
cout<<"\nEnter elements:\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cin>>a[i][j];
}
cout<<endl;
}
cout<<"\nEntered matrix:\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cout<<a[i][j];
cout<<"\t";
}
cout<<"\n";
}
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
if(a[i][j]>0||a[i][j]<0)
{
c=c+1;
}
}
}
num(a,c);
return 0;
}
void num(int o[][50],int z)
{
int m=0,n=0,s[50][50];
if(z>((x*y)/z))
{
cout<<"\nIt is not a sparse matrix.\n";
}
else
{
s[0][0]=x;s[0][1]=y;s[0][2]=z;m++;n++;
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
if(o[i][j]>0)
{
s[m][2]=o[i][j];
s[m][0]=i;
s[m][1]=j;
}
}
m++;
}
cout<<"\nGiven matrix is sparse.\nNon_sparse matrix is given below:\n";
for(i=0;i<z+1;i++)
{
for(j=0;j<3;j++)
{
cout<<s[i][j]<<"\t";
}
cout<<"\n";
}
}
}
