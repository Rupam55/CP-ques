#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pfl(x) printf("%lld\n", x)
#define pb push_back
#define l(s) s.size()
#define asort(a) sort(a, a + n)
#define dsort(a) sort(a, a + n, greater<int>())
#define vasort(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n = s.length();
    int table[n][n];
    memset(table, 0, sizeof(table));

    for (int i = 0; i < n; i++)
    {
        table[i][i] = 1;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i + 1]) { 
            table[i][i + 1] = 1;   
        } 
    }

    for (int k = 3; k <= n; ++k) { 
        for (int i = 0; i < n - k + 1; ++i) { 
            int j = i + k - 1; 
           if (table[i + 1][j - 1] && s[i] == s[j]) { 
                table[i][j] = 1; 
            } 
        } 
    } 

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<table[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    for (int i = 0; i < n; i++)
    {
        if(table[0][i] == 1){
            for (int j = i+1; j < n-1; j++)
            {
                if(table[i+1][j] == 1){
                    if(table[j+1][n-1] == 1){
                        cout<<s.substr(0, i+1)<<"\n"<<s.substr(i+1, j-i)<<"\n"<<s.substr(j+1, n-1);;
                        return 0;
                    }
                }
            }   
        } 
    }
    
    cout<<"impossible";
    return 0;
}