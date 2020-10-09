#include<iostream>
using namespace std;

// int sizeOf(int x)
// {
//     return sizeof(x);
// }

// int sizeOf(string x)
// {
//     return sizeof(x);
// }

// int sizeOf(float x)
// {
//     return sizeof(x);
// }

int main()
{
  int a;
  string s;
  float f;
  int skr[10];

  cout<<"Size of Array is "<<sizeof(skr)<<endl;
  cout<<"No of elements in Array is "<<sizeof(skr)/sizeof(skr[0])<<endl;

  cout<<"Enter any integer"<<endl;
  cin>>a;
  cout<<"Size of "<<a <<" is "<< sizeof(a)<<endl;


  cout<<"Enter any string"<<endl;
  cin>>s;
  cout<<"Size of "<<s <<" is "<< sizeof(s)<<endl;

  cout<<"Enter any float"<<endl;
  cin>>f;
  cout<<"Size of "<<f <<" is "<< sizeof(f)<<endl;
    return 0;
}
