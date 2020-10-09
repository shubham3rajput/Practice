// 10000*9.5/(1-1/(1+9.5)^(5*12))

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int P,N,S1,S2;
cin>>P>>N>>S1;

int arrs1[S1];
float arrr1[S1];

for (int i=0;i<S1;i++)
{
    cin>>arrs1[i]>>arrr1[i];

}
       
cin>>S2;
int arrs2[S2];
float arrr2[S2];

for (int i = 0; i < S2; i++)
{
    cin >> arrs2[i] >> arrr2[i];
}



 int total1=0;
 for (int i = 0; i < S1; i++)
 {
     int emi1 = P * arrr1[i] / (1 - 1 / pow((1 + arrr1[i]), (arrs1[i] * 12)));
     total1=total1+emi1;
 }

 int total2 = 0;
 for (int i = 0; i < S2; i++)
 {
     int emi2 = P * arrr2[i] / (1 - 1 / pow((1 + arrr2[i]), (arrs2[i] * 12)));
     total2 = total2 + emi2;
 }

    if(total1<total2)
    {
        cout<<"A";

    }
    else
    {
        cout<<"B";
    }












}




































    // int P=10000;
    // int N=20 , Slab=3;
    // int n1=5 , n2=10 ,n3=5;
    // float r1=9.5, r2=9.6, r3=8.5;

    // int P = 10000;
    // int N = 20, Slab = 3;
    // int n1 = 10, n2 = 5, n3 = 5;
    // float r1 = 6.9, r2 = 8.5, r3 = 7.9;

    // int P = 500000;
    // int N = 26, Slab = 3;
    // int n1 = 14, n2 = 6, n3 = 6;
    // float r1 = 8.5, r2 = 7.4, r3 = 9.6;