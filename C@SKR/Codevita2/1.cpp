#include <iostream>
using namespace std;
int main()
{
    int e, f, g, h, w, count = 0;
    cin >> e >> f >> g >> h;

    if (e > 0 && f < 1501 && g > 0 && h < 1501)
    {
        for (int i = e; i <= f; i++)
        {
            for (int j = g; j <= h; j++)
            {
                int a = i;
                int b = j;
                while (a > 1)
                {
                    if (a > b)
                    {
                        int q = a / b;
                        int r = a % b;
                        count += q;
                        a = r;
                        if (r == 1)
                        {
                            w = b;
                        }
                    }
                    else if (a < b)
                    {
                        int q = b / a;
                        int r = b % a;
                        count += q;
                        if (r == 1)
                        {
                            w = a;
                        }
                        a = r;
                    }
                    else
                    {
                        /* code */
                    }

                    if (a == 1)
                    {
                        count += w;
                    }
                    else
                    {
                    }
                }
            }
        }

        cout << count<<endl;
    }

    else{}
}