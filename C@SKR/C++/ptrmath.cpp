#include<iostream>
using namespace std;

int main()
{

 int num;
    int q1,q2,q3,q4;
    int s1,s2,s3,s4;
    int d1,d2,d3,d4;
    int max;
 
    cin>>num>>q1>>q2>>q3>>q4>>s1>>s2>>s3>>s4;
   
   d1=s1/q1;
   d2=s2/q2;
   d3=s3/q3;
   d4=s4/q4;
    

if(d1<d2 && d1<d3 && d1<d4)
{
    cout<<d1;
}

else if(d1>d2 && d3>d2 && d2<d4)
{
    cout<<d2;
}
if(d3<d1 && d3<d2 && d3<d4)
{
    cout<<d3;
}
if(d4<d1 && d4<d2 && d4<d3)
{
    cout<<d4;
}


}