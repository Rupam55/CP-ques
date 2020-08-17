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
#define PI 3.14159265
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
    ll radius;
    cin>>radius;
    std::vector<ll> r(4);
    r[0]=0;
    for(ll i=1;i<4;i++)cin>>r[i];
    std::vector<ll> p(4);
    intovec(p,4);
    std::vector<ll> s(4);
    intovec(s,4);
    std::vector<ll> d(4);
    intovec(d,4);
    ll n;
    cin>>n;
    //chk(n);
    //chkv(r);
    std::vector<pair<double,double>> v;
    for (ll i = 0; i < 4; ++i)
    {
    	double theta;
    	if(d[i]==1){
    	   theta=(p[i]+(n*s[i]))%360;
           }
    	else{
            if(p[i] - (n*s[i]) >= 0){
                theta = p[i] - (n*s[i]);
            }else{
                theta = (360 - (abs(p[i] - (n*s[i])))%360);
            }
        }
    		theta = theta * (PI/180);
        //cout<<"theta="<<theta<<"\n";    
    	double x=r[i]+radius*cos(theta);
    	double y=radius*sin(theta);
    	v.push_back(make_pair(x,y));
    }
    /*for(auto x: v){
    	cout<<x.first<<" "<<x.second<<"\n";
    }*/
    double dist=0;
    /*for(auto it=v.begin();it!=v.end();it++){
        double x1,x2,y1,y2;
        x1=*it.first;
        y1=it.second;
        x2=(it+1).first;
        y2=(it+1).second;
        dist+=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    }*/
    vector<double>x,y;
    for(auto t: v){
        x.push_back(t.first);
    }
    for(auto t:v){
        y.push_back(t.second);
    }
    //cout<<"\n";
    //chkv(x);
    for(ll i=0;i<3;i++){
        //cout<<dist<<" ";
        dist+=sqrt(pow((x[i]-x[i+1]),2)+pow((y[i]-y[i+1]),2));
        
    }
    //cout<<"\ndist=";
    cout<<round(dist);


return 0;
}