#include<iostream>
#include<string.h>
using namespace std;

class SKR{
public:
 void setName(string x){
     name=x;
 }

string getName(){
    return name;
}


private:
string name;

};


int main(){
    SKR skr;
    skr.setName("My name is Rajput");
    cout << skr.getName() ;
}