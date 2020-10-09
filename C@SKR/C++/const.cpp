#include<iostream>
#include<string.h>
using namespace std;

class SKR{
public:  
  SKR(string z){
      setName(z);
  }

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
SKR skrobj("This is skr");
cout<<skrobj.getName();


return 0;
}