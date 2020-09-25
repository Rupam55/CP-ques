// Take as input str, a string. Assume that value of a=1, b=2, c=3, d=4, …. z=26. Write a recursive function (return type Arraylist) to print all possible codes for the string. E.g. for “1123” possible codes are aabc, kbc, alc, aaw, kw.
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
#define ds(a) sort(a, a + n, greater<ll>())
#define vs(v) sort(v.begin(), v.end());
#define nl cout << endl;
#define F first
#define S second
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef pair<ll, ll> pi;
typedef pair<ll, ll> pl;

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}

vector<string> arr;

void solve(string s, string ans, int i, int n){

    if(i == n){
        arr.push_back(ans);
        return;
    }
    int num = s[i]-'0';
    if(num == 0){
        solve(s,ans,i+1,n);
    }else{
        char ch = 96 + num;
        solve(s,ans+ch,i+1,n);

        if(i+1 != n){
            int num2 = s[i+1]-'0';
            num2 = num*10 + num2;
            if(num2 <= 26){
                char ch2 = 96 + num2;
                solve(s,ans+ch2,i+2,n);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,ans = "";
    cin>>s;
	solve(s,ans,0,s.length());
    cout<<"[";
    for(int i =0; i < arr.size()-1; i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[arr.size()-1]<<"]";
    return 0;
}