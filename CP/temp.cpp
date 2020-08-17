#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
const int maxn = INT_MAX;
#define foreach(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)
#define sgn(x,y) ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))
#define rep(i,n) for(__typeof(n) i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite freopen("output.txt","w",stdout)
#define read freopen("input.txt","r",stdin)
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
#define chk(p) cout<<p<<"\n"
#define chkv(v) for(auto x:v){cout<<x<<" ";}cout<<"\n"
#define chkmp(mp) for(auto x:mp){cout<<x.first<<" "<<x.second<<"\n";}cout<<"\n"
#define intovec(v,n) for (ll int i = 0; i < n; ++i)cin>>v[i] //insert into vec v of size n
    


 
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;


//--------------end template

int main(){
    FASTER;
    ll n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        std::map<char, int> mpa,mpb;
        for(auto x: a){
            mpa[x]++;
        }
        for(auto x: b){
            mpb[x]++;
			mpa[x]--;
        }
        //chkmp(mpa);
		string pre="",post="";
        for(auto x:mpa){
            string k1="",k2="";
            k1=x.first+b;
            k2=b+x.first;
            if(k1<k2){
                for(int i=0;i<x.second;i++)
                pre+=x.first;
            }
            else{
                for(int i=0;i<x.second;i++)
                post+=x.first;
            }
        }
       	string ans = "";
		ans = pre+b+post;
        cout<<ans<<"\n";
    }
return 0;
}