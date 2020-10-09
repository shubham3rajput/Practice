#include<iostream>
using namespace std;
int main(){

 int skr[10]={1,2,3,4,5,6,7,8,9,10};
int sum=0;


cout <<"Element----------SUM"<<endl;

 for (int x=0;x<10;x++ )
 {

  sum+=skr[x];
cout<<"   "<<x+1<<"              "<<sum<<endl;
 }return 0;



}