#include<iostream>
using namespace std;

class SKR{
    public:

    void func(){
        cout<<"Hello It's Shubham Rajput"<<endl;

    }
};

class SKRR{
    public:

    void func(){
        cout<<"Hello It's Shubham Singh Rajput"<<endl;

    }
};
int main()
{

    SKR skrobj;
    skrobj.func();

    SKRR skr1obj;
    skr1obj.func();

    return 0;
}


