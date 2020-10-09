#include<iostream>
using namespace std;

int main()
{

int skr[3][23]={{1,21,56},{39,45,89},{563,854,4899}};

for(int row=0;row<3;row++){
    for (int column=0;column<3;column++){
  cout << "   " <<skr[row][column] << "  ";
    }

    cout<<endl;
}
    return 0;
}