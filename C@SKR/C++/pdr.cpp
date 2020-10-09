#include<iostream>
using namespace std;

int div(int a)
{
    if(a==1)
    {
        return 0;
    }
 
if (a!=1){



    int div=0;
    int i;
for (i=1;i<=(a/2)+1;i++)
{

    if(a%i==0)
    {
   div+=i ;
    }
}
if(div==a)
{
    return 1 ;
}

else
{
return 0; 
}
}
}



int main()
{

int i,a,b;
cin>>a;
cin>>b;

for (i=a;i<=b;i++)
{

 int value=div(i);

 if(value==1)
 {
    cout<<i<<endl;
  
 }
 else
 {
     cout<<"";
 }


}
    return 0;
}