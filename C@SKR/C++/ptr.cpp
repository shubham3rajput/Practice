#include<iostream>
using namespace std;

void passbyValue(int x);
void passbyReference(int *x);

int main(){
 int a=18,b=18;

passbyValue(a);
cout <<a<<endl;
passbyReference(&b);
    cout<<b<<endl; 
    return 0;
}

void passbyValue(int x){
x=99;
}

void passbyReference(int *x){
    *x=99;
}