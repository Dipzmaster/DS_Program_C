 #include<iostream>
           long factorial (long a)
           {   if (a > 1)
           return (a * factorial (a-1));
           else
            return (1); }
int main ()
{
long ln;
 cout<<"Type a number: ";
 cin>> ln;
 cout<<"!"<<ln<<"="<<factorial (ln);
 return 0;
  }
