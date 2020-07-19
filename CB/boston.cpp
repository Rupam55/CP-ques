#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int infi = 1000000007;

void primeFactors(vector<int>&fac, int n)  
{  
    while (n % 2 == 0)  
    {  
        fac.push_back(2);  
        n = n/2;  
    }  
   for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            fac.push_back(i);  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        fac.push_back(n);  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<int>fac;
    primeFactors(fac,n);
    int ans=0,ans1=0;
    for (int i = 0; i < fac.size(); i++)
    {
        while(fac[i]>0){
            ans+=fac[i]%10;
            fac[i]/=10;
        }
    }
    while(n>0){
        ans1+=n%10;
        n/=10;
    }
    (ans==ans1)?cout<<1:cout<<0;
}