#include<iostream>
 class distance
 {  int feet;
 float inches;
 public:
  distance()
  {   feet=0;   inches=0.0;  }
   void getdist()
   {
       cout<<"Enter feet:"<<endl;
   cin>>feet;
   cout<<"Enter inches:"<<endl;
    cin>>inches;
    }
    void showdist()
    {
cout<<feet<<endl<<inches<<endl;
}
friend void maxdist(distance d1, distance d2)
{
 d1.feet=d1.feet+ d1.inches/12;
 d2.feet=d2.feet+ d2.inches/12;
 if(d1.feet>d2.feet)
 {
 cout<<"first distance is greater";
 }  else
 {  cout<<"second distance is greater";
 }
 }
 };
  void main()
   {
    distance d3,d4;
     d3.getdist();
      d3.showdist();
       d4.getdist();
        d4.showdist();
         maxdist(d3,d4);
         }
