#include<iostream>
#include<string>
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

SKR obj1("ABC");
cout<<obj1.getName()<<endl;

SKR obj2("DEF");
cout<<obj2.getName()<<endl;

SKR obj3("GHI");
cout<<obj3.getName()<<endl;


return 0;
}