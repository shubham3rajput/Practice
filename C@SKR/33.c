#include<stdio.h>
#include <math.h>
int main()
{
    int n;
    int i, j;
    scanf("%d",n) ;

    int arr[n][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int arr3[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int p = arr[i][0];
            int q = arr[i][1];
            int y = pow(p, 2) + pow(q, 2);
            int z = sqrt(y);

            arr3[i] = z;
        }
    }

    int arr4[n];

    for (i = 0; i < n; i++)
    {
        float k = arr3[i] / arr[i][2];
        arr4[i] = k;
    }

    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr4[i] == arr4[j])
            {
                count++;
                // break;
            }
        }
        // cout<<arr4[i]<<endl;
    }

    printf("%d",count);

    return 0;
}