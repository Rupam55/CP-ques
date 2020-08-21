#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fr1(i, n) for (int i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

int infi = 1000000007;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		string s;
        cin>>s;
        map<int,int>mp;
        for(int i = 0; i < s.length(); i++){
            int j = i;
            int count = 0; 
            while(j < s.length() && s[j]=='1'){
                count++;
                j++;
            }
            mp[count]++;
            i=j;
        }
        int count = 1,alice = 0, other = 0;
        for(auto it = mp.rbegin(); it != mp.rend(); ++it){
            while(it->first != 0 && mp[it->first] >0){
                if(count & 1){
                    alice+=it->first;
                    mp[it->first]--;
                    count++;
                }else{
                    other+=it->first;
                    mp[it->first]--;
                    count++;
                }
            }
        }
        cout<<alice;
        nl 
	}

	return 0;
}
// dev