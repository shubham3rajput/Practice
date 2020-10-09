#include<iostream>
#include <bits/stdc++.h> 

using namespace std;
int main()
{
  int n,i,temp;
  cin>>n;
  int arr[n];
  
  for (i=0;i<n;i++)
  {
    cin>> arr[i];
  }
  {
//   for (i=0;i<n;i++)
//   {
//     if(arr[i]<arr[i+1])
//     {
//       arr[i]=temp;
//       temp=arr[i+1];
//       arr[i]=arr[i+1];
      
//     }
    
//   }
  cout<<*max_element(arr,arr+n);
  }
  return 0;
}
