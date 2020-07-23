// simple string
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,n;
        cin >> n;
        vector<ll> arr(n);
        bool flag=false;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = 1; i < n - 1; ++i)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                flag=true;
                a=i;
                b=i+1;
                c=i+2;
            }
        }
        if(flag){
            cout << "YES" << "\n";
            cout << a << " " << b << " " << c << "\n";
        }else{
            cout<<"NO"<<"\n";
        }

    }
}
