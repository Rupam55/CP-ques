#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= sqrt(a[j]); i++)
        {
            if (a[j] % i == 0)
            {
                // If divisors are equal, print only one
                if (a[j] / i == i)
                    mp[i]++;

                else{ // Otherwise print both
                    mp[i]++;
                mp[a[j] / i]++;}
            }
        }
    }
    ll maxi=INT_MIN;
    for (auto x : mp){
        if(x.second>k && x.second> maxi){
            maxi=x.second;
        }
    }
    cout<<maxi;
}

// hr problemsolving (intermidiate)