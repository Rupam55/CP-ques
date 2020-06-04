#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

struct card
{
    int a;
    int b;
};

bool cmp(const card &left, const card &right)
{
    return (left.b > right.b) || (left.b == right.b && left.a > right.a);
}

int main()
{
    int n;
    cin>>n;

    card c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>c[i].a>>c[i].b;
    }
    sort(c,c+n,cmp);
    cout<<"ans"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<c[i].a<<" "<<c[i].b<<"\n";
    }
    
    
}
