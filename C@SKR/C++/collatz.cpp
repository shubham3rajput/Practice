#include<iostream>
using namespace std;

int main()
{

    int num,i,count=0;
    cin>>num;
// while(num>1)
// {

    
    // cout<<num<<endl;
    while(num>1)
    {

    if(num%2!=0)
    {   
        cout<<num<<endl;
        num=(3*num)+1;
        count++;
        // cout<<num<<endl;
    }

        cout<<num<<endl;
        num=num/2;
        count++;    
    }

        cout<<"1"<<endl;
        cout<<count;

    // num=num/2;
// }
return 0;

  
}