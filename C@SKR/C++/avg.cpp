#include<iostream>
using namespace std;


int main(){
   


   int age;
   int agetotal=0;
   int num=1;
   int avg;

   cout<<"Enter first person's age or -1 to quit"<<endl;
   cin>>age;

   while(age!=-1)
   {
         
        cin>>age;
        agetotal+=age;
        num++;
    
   cout<<"Enter age of person no." << num << "or -1 to quit"<<endl;

   }

   avg=(agetotal)/(num);
   cout<<"Average age is: "<<avg;
    return 0;
}





