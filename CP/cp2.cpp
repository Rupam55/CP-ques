#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v(26);
    for (int i = 0; i < 26; i++)
    {
        cin>>v[i];
    }
    int maxi=INT_MIN;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        int a=s[i];
        a-=97;
        maxi=max(maxi,v[a]);
    }
    cout<<maxi*s.length();
}

// Designer PDF Viewer

