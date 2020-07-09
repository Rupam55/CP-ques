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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,tag,lenP,lenH,i;
    cin>>t;
    while(t--)
    {
        string p,h;
        tag=0;
        cin>>p>>h;
        lenP=p.size();
        lenH=h.size();
        if(lenP>lenH)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(p.begin(),p.end());
        for(i=0; i<=(lenH-lenP); i++)
        {
            string s=h.substr(i,lenP);
            sort(s.begin(),s.end());
            if(s==p)
            {
                tag=1;
                break;
            }
        }
        if(tag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}