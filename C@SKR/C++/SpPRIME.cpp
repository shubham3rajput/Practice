#include<iostream>
using namespace std;

int isPrime(int a)
{
int i;

for (i=2;i<=a/2;i++)
{
    if(a%i==0)
    {
        return 0;
    }

    else
    {
        return 1;
    }
    
}

}



int main()
{
   int n,i,j;


   cout<<"Enter N"<<endl;
   cin>>n;

   int x[n]={ };
   int y[n]={ };
   int sum[n]={ };
   int psum[n]={ };


for(i=0;i<=n;i++)
{
  x[i]=i;
  y[i]=i;
  int m=x[i]+y[i];
  sum[i]=m;
}

    int count=0;


for(i=0;i<=n;i++)
{
    int p=isPrime(sum[i]);
    if(p==1)
    {
        count=count+1;
        
    }
}



    return 0;
}