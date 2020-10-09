// 1,2,3,4,5

// Peaks: 5

// Troughs: 1



// 5,10,5,7,4,3,5

// Peaks: 10,7,5

// Troughs: 5,5,3


#include<iostream>
using namespace std;
int main()
{
 int a[7]={5,10,5,7,4,3,5};
 int i;

 for(i=1;i<7;i++)
 {
     if( a[i]>a[i+1] && a[i]>[i-1] )
     {
        cout<<"PEAK"<<i<<":"<<a[i]<<" ";
     }

     else if(a[i]<a[i+1] && a[i]<[i-1])
     {
        cout<<"TROUGH"<<i<<":"<<a[i]<<" ";
     }

     else
     {
    
     }
     
 }





    return 0;
}