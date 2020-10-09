#include<iostream>
using namespace std;

int sumofarr(int x[],int sizeofArray){
    int sum=0;
    for (int i=0;i<sizeofArray;i++)
    {
        sum+=x[i];
    }

    return sum;
}



int main(){

    int skr[10]={1,2,3,4,5,6,7,8,9,10};


    cout<<"Sum is "<<sumofarr(skr,10);
    
    return 0;
}