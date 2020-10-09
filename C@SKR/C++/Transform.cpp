#include<iostream>
using namespace std;
int main()
{
   int r,c,i,j;
   int a[10][10],b[10][10];

   cin>>r>>c;

   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           cin>>a[i][j];
       }
   }

   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           cout<<a[j][i]<<" ";
       }
       cout<<endl;
   }




    return 0; 
}