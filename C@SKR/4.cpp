#include<iostream>
#include<cmath>
using namespace std;

float distance(int x1,int x2)
{
    return sqrt(pow(x1,2)+pow(x2,2));
}

int main()
{
int n;
    
    cin>>n;
    int i, j;
    int arr[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }



int arr4[n];



for(i=0;i<n;i++)
{


float k = distance(arr[i][0],arr[i][1]) / arr[i][2];
arr4[i] = k;
}

int count = 0;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(arr4[i]==arr4[j])
        {
            count++;
        }
    }
}

cout<<count;
}