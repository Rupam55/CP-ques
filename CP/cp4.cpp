#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n,x,y;
    cin>>n>>x>>y;
    set<double>s;
    double a,b,c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(x == a){c = 1;}
        else{s.insert((b - y) / (a - x));}
    }
    cout<<s.size()+c;
}