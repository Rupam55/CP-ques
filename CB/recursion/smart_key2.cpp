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

ll infi = (ll)1e15;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
vector<string> arr;

void solve( string num , int i, string ans){

    if(num[i] == '\0'){
        arr.push_back(ans);
        return;
    }

    int pos = num[i] - '0' ;

    for(int j = 0 ; j < table[pos].length() ; j++){
        ans[i] = table[pos][j];
        solve(num,i+1,ans);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    string num;
    cin>>num;
    string ans(num.length(),'0');
    solve(num,0,ans);
    string searchIn [11] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

    for(int i =0 ;i < 11; i++){
        string first = searchIn[i];
        for(int j = 0; j < arr.size(); j++){
            if(first.find(arr[j]) != string::npos){
                cout<<first<<"\n";
                break;
            }
        }
    }
    return 0;
}