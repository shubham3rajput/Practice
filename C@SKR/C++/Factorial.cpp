#include<iostream>
#include <cmath>
using namespace std;

int factorial(int x)
{
    // base case always needs to mention , because it the point where the function ceases.
    if (x==0 || x==1){
        return 1;
    }

    else
    {
       return x*factorial(x-1);
    }
}


int main()
{
    int n;
    cout<<"Enter the number for which factorial is required : "<<endl;
    cin>>n;

    cout<<"Factorial of "<<n<<" is : "<<factorial(n);
    return 0;

}