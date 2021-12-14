#include<iostream>
#include<fstream>
int main()
{
ofstream fout;
fout.open("Hello.dat");
fout<<"This is only a test\n";
fout<<"Nothing can go wrong\n";
fout<<"All things are fine....\n";
fout.close();   const int N=100;
char line[N];
ifstream fin;
fin.open("Hello.dat");
cout<<"Contents of the Hello.dat file\n";
while(fin)
{
fin.getline(line,N);
cout<<line;
}
fin.close();}
