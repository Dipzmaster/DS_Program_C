#include<iostream>
using namespace std;
int main()
{
int i, a[100],n,k;
cout<<"\nEnter number of elements in array:";
cin>>n;
cout<<"\nEnter the elements:\n";
for(i=0;i<n;i++)
{
cin>>k;
a[i]=k;
}
cout<<"\nArray entered is:\n\n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
cout<<endl;
cout<<"\nEnter the place of modification:\n";
cin>>k;
cout<<"Modified array is:\n";
for(i=0;i<n;i++)
cout<<endl;
cout<<"\nEnter number of elements to be deleted:\n";
cin>>k;
for(i=0;i<n-k;i++)
a[i]=a[i+k];
cout<<"\nNew array formed is:\n";
for(i=0;i<n-k;i++)
cout<<a[i]<<"\t";
cout<<endl;
}
