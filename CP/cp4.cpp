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

    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        int current=v[i];
        for (int j = i+1; j < n; j++)
        {
            if(v[j]<=current){
                count++;
                current=v[j];
            }else{
                break;
            }
        }
        current=v[i];
        for(int j=i-1; j >= 0; j--){
            if(v[j]<=current){
                count++;
                current=v[j];
            }else{
                break;
            }
        }
        maxi=max(maxi,count);
    }
    cout<<maxi+1;
}