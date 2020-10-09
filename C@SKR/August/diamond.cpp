
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=3;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(cout<<"*";)
//         }
//         cout<<"\n";
//     }


//     return 0;
// }cout<<"*";

#include <iostream>
using namespace std;

int main()
{
    int m, n, tr, tc, count = 0;
    cin >> m >> n;
    cin >> tr >> tc;
    char arr1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = tr - 2; i <= tr; i++)
    {
        for (int j = tc - 2; j <= tc; j++)
        {

            if ((i > 0 && i <= m) && (j > 0 && j <= n))
            {
                char p = arr1[i][j];

                if (&p == "W")
                {
                    count += 1;
                    tr = i;
                    tc = j;
                }
                else
                {
                }
            }

            else
            {
            }
        }
    }

    cout << count;
}

//YOUR CODE ENDS//
