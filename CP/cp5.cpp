#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a][a], b = 1;
        for (int i = 0; i < a; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < a; j++)
                {
                    arr[i][j] = b;
                    b++;
                }
            }
            else
            {
                for (int j = a - 1; j >= 0; j--)
                {
                    arr[i][j] = b;
                    b++;
                }
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout<<arr[i][j]<<" ";
            }cout<<"\n";
        }
    }
}