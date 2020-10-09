#include<vector>
#include <bits/stdc++.h>
using namespace std;


int main() 
{ 
	int n,k,count2=0;
    cin>>n>>k;
    int arr[n];  
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    vector<int> x ={ };

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(arr[j]>=arr[i]-k   && arr[j]<=arr[i]+k   )
        {
    
            x.push_back(arr[j]);
        
        }

        }

    }
        for (int j=0;j<n;j++)
        {
            int p=count(x.begin(), x.end(),arr[j]);
            if(p<=1)
            {
                count2+=1;
            }

        }
printf("%d",n-count2);

	return 0; 
} 
