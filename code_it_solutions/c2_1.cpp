#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vs(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vl;
typedef vector<int> vi;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,s1 = "";
    cin >> s;
    int no = 0;
    for(int i =0; i<s.length(); i++){
        if(s[i] == '-'){
            no++;
        }else{
            s1 += s[i];
        }
    }
    if(is_sorted(s1.begin(),s1.end()) && s1.length()>0){
        cout<<"YES"<<"\n"<<s1;
    }else if(s1.length() == 0){
        cout<<"NO";
    }else{
        if(no > 0){
            sort(s1.begin(),s1.end());
            cout<<"YES"<<"\n"<<s1;
        }else{
            cout<<"NO";
        }
    }

    return 0;
}

// dev