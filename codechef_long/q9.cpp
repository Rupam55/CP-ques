#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << "\n";
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {

        ll n = 1, k = 1;
    cin >> n >> k;
    k++;
    string s,dumy="";
    cin >> s;
    ll found_pair = 0;

    for (int i = 0; i <= n; i++)
    {
        if(s[i] == 'X' || i == n){
            // cout<<dumy<<"\n";

            vector<ll> pos (n+1);
            queue<ll> iron;
            queue<ll> mag;
            ll cumm =0;
            for(int j=0; j<dumy.length(); j++){
                if(dumy[j] == ':'){
                    cumm ++;
                }
                else if(dumy[j] == 'M'){
                    mag.push(j);
                }
                if(dumy[j] == 'I'){
                    iron.push(j);
                }
                pos[j]=cumm;
            }

            while(!mag.empty() && !iron.empty()){
                ll mag_pos = mag.front();
                ll iron_pos = iron.front();
                // cout<<mag_pos<<" "<<iron_pos<<"\n";
                if( k - abs(mag_pos - iron_pos) - abs(pos[iron_pos] - pos[mag_pos]) > 0){
                    found_pair++;
                    iron.pop();
                }
                mag.pop();
            }

            dumy = "";
        }
        else{
            dumy += s[i];
        }
    }

    cout<< found_pair;
    nl
    }
    return 0;
}
//dev