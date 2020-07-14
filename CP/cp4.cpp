#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        vector<int>v;
        v.push_back(0);
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='R') v.push_back(i+1);
        }
        v.push_back(s.length()+1);
        int maxi=INT_MIN;
        for (int i = 0; i < v.size()-1; i++)
        {
            int dif=abs(v[i]-v[i+1]);
            maxi=max(maxi,dif);
        }
        cout<<maxi<<"\n";
    }
}