#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
//VIKRAMC
/*
The sacrifice… that’s the price of a good trick. - Alfred Borden
 
 “Even though I’m bitter over losing,
 even though I’m depressed, even though my ankle hurts,
 and my eyes are smeared with tears…
 even though I’ve never felt worse…
 I wonder why the stars are sparkling like this.”
 – Tsubaki Sawabe
 
 “Huh? What is this? I’m participating in a club activity.
 I’m laughing and talking…. at school. The ramune is sweet…
 And when I put it in my mouth, it falls apart.
 As it melted, I felt a lump in my throat.
 If I wasn’t careful, it felt like something was going to leak from my eyes.
 So I used every ounce of will to hold it in.” – Rei Kiriyama
 
 “Frightened of my futureless life, scared by my foolish anxieties,
 unable to see ahead and aiming nowhere,
 I continued ceaselessly living my ridiculously idiotic life.”
― Tatsuhiko Takimoto
*/
 
#define PEACE std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define DECIMAL(n)  std::cout << std::fixed;std::cout << std::setprecision(n);
#define hell 1000000007
#define modd 998244353
#define PI 3.14159265358979323844
//#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define endl "\n"
#define maxc (v) max_element(all(v))
#define minc(v) min_element(all(v))
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
#define initarr(a,n,x) for (int i=0;i<n;++i) a[i]=x
#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define sz(a) (int)a.size()
#define sl(a) (int)a.length()
#define invect(data,n,commands) for(int i = 0;i<n;i++){int tmp;cin>>tmp;data.pb(tmp);commands}
#define inset(data,n,commands) for(int i = 0;i<n;i++){int tmp;cin>>tmp;data.insert(tmp);commands}
#define display(x) trav(aaaa,x) cout<<aaaa<<" ";cout<<endl
 
 
#define ll long long int
typedef long double ld;
#define pii std::pair<int, int>
#define pll std::pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi >
#define vii vector<pii >
const ll INF = 1LL << 60;
const ll N = 1e6 + 5;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
 
ll n, m, k, x, y, z, q;
 
int mod = 1e9 + 7;
 
ll add(ll a, ll b) {
	if (a + b >= mod)return a + b - mod;
	return a + b;
}
ll sub(ll a, ll b) {
	if (a < b)return a - b + mod;
	return a - b;
}
ll mul(ll a, ll b) {
	return 1LL * a * b  % mod;
}
ll power(ll a, ll b) {
	if (b < 0)return 0;
	int re = 1;
	while (b) {
		if (b & 1) {
			re = mul(re, a);
		}
		a = mul(a, a);
		b >>= 1;
	}
	return re;
}
 
bool sortbysec(const pair<ll, ll> &a,
               const pair<ll, ll> &b)
{
	return (a.second < b.second);
}
 
bool sortbyfi(const pair<ll, pair<ll, ll> > &a,
              const pair< ll, pair<ll, ll>> &b)
{
	return (a.fi > b.fi);
}
 
const int mox[] = { +1, -1, +0, +0};
const int moy[] = { +0, +0, +1, -1};
 
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> ppq;
//---------------------------------------------------------------
 
 
// I am a real noobie
/*
ll bs(vector <ll> v, ll x)
{
	ll hi = v.size() - 1, lo = 0;
	while (hi >= lo)
	{
		ll mid = lo + (hi - lo) / 2;
 
		if (v[mid] == x) return 1;
		else if (v[mid] < x) lo = mid + 1;
		else hi = mid - 1;
	}
	return 0;
}
 
bool paired(char a , char b)
{
	if (a == '[' and b == ']') return true;
	if (a == '{' and b == '}') return true;
	if (a == '(' and b == ')') return true;
	if (a == '<' and b == '>') return true;
	return false;
}
 
bool cmp(pair <ll, vector <ll>> a, pair <ll, vector <ll> > b)
{
	return a.fi > b.fi;
}
 
ll bit[N] = {0};
 
 
void update(ll idx, ll val)
{
	while (idx <= 100000)
	{
		bit[idx] += val;
		idx += idx & -idx;
	}
}
 
ll pref(ll idx)
{
	ll ans = 0;
	while (idx > 0)
	{
		ans += bit[idx];
		idx -= idx & -idx;
	}
	return ans;
}
 
ll rsum(ll l, ll r)
{
	return pref(r) - pref(l - 1);
}
 
 
ll mEx(ll x, ll n, ll mod)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)     //n is even
		return mEx((x * x) % mod, n / 2, mod);
	else                             //n is odd
		return (x * mEx((x * x) % mod, (n - 1) / 2, mod)) % mod;
 
}
ll inv(ll x)
{
	return mEx(x, modd - 2, modd);
}
 
 
 
 
ll parent[N], Rank[N], cunt[N];
void makeset(ll x)
{
	parent[x] = x;
	Rank[x] = 0;
	cunt[x] = 1;
}
 
ll findset(ll x) {
	if (x == parent[x]) return x;
	return parent[x] = findset(parent[x]);
}
 
void unionset(ll a, ll b)
{
	ll x = a, y = b;
	a = findset(a);
	b = findset(b);
 
	if (a != b)
	{
		if (Rank[a] < Rank[b]) swap(a, b);
 
		parent[b] = a;
		cunt[a] += cunt[b];
		if (Rank[a] == Rank[b]) Rank[a]++;
	}
}
 
*/
/*
vector <ll> g[N];
ll tim[N], vis[N];
ll nhi = 0;
vector <ll> ans;
void dfs(ll u, ll p, ll t = 1)
{
	vis[u] = 1;
 
	for (auto v : g[u])
	{
		if (vis[v] == 0)
		{
			dfs(v, u, t + 1);
		}
		else if (vis[v] == 1) {
			//cout << "HI: " << u << " " << v << endl;
			nhi = 1;
			continue;
		}
 
	}
 
	vis[u] = 2;
	tim[u] = t;
	ans.pb(u);
}
 
/*
ll dfs2(ll u, ll cc)
{
	comp[u] = cc;
	for (auto v : gr[u])
	{
		if (comp[v]) continue;
		dfs2(v, cc);
	}
 
	return 0;
}
 
/*
 
vector <pll> V(N);
void dijkstra(ll src)
{
  for(ll i=1;i<=n;i++) dis[i] = INF;
  dis[src] = 0;
 
  set <pll> q;
  q.insert({0,src});
 
  while(!q.empty())
  {
    ll v = q.begin()->se;
    q.erase(q.begin());
 
    for(auto edge:g[v])
    {
      ll to = edge.se;
      ll len = edge.fi;
 
      if(dis[v]+len<dis[to])
      {
        q.erase({dis[to],to});
        dis[to] = dis[v]+len;
        q.insert({dis[to],to});
        V[to] = {len,v};
      }
      else if(dis[v]+len==dis[to])
      {
        if(len<V[to].fi) V[to] = {len,v};
      }
    }
  }
}
 
 
 
 
void bfs(ll src)
{
	rep(i, n + 1) dis[i] = INF;
	queue <ll> q;
	dis[src] = 0;
	q.push(src);
 
	while (!q.empty())
	{
		ll u = q.front();
		q.pop();
		vis[u] = 1;
		//cout << u << endl;
 
		for (auto v : g[u])
		{	//cout << v << " " << dis[v]  << " " << dis[u] << endl;
			if (dis[v] > dis[u] + 1 and a[v] == 1 and !vis[v])
			{
				dis[v] = dis[u] + 1;
				q.push(v);
			}
		}
	}
}
 
/*
int visi[501][501];
void flow(ll i, ll j)
{
	if (i<0 or i >= n or j<0 or j >= m) return;
	if (a[i][j] == '#' or visi[i][j]) return;
	//cout << i << " " << j  << endl;
	ans.pb({i, j});
	visi[i][j] = 1;
 
	flow(i + 1, j);
	flow(i - 1, j);
	flow(i, j + 1);
	flow(i, j - 1);
}
*/
 
bool bs(ld xx)
{
	ll sb = xx / (x * y);
	ll sb1 = xx / x;
	ll sb2 = xx / y;
 
	if ((xx - sb1) < n or (xx - sb2) < m) return false;
 
	xx -= sb;
 
	ll sum = m + n;
	return sum <= xx;
}
 
bool cmp1(pll a, pll  b)
{
	return a.se < b.se;
 
}
 
bool cmp2(pll a, pll  b)
{
	return a.se > b.se;
 
}
/*
ll dp[100001][10][10][10];
ll vis[11];
ll a[11][21];
/*
ll tipsy(ll d, ll p, ll val)
{
	if (p >= n) return 0;
	ll res = 1e9;
	if (dp[d][p][val] != -1) return dp[d][p][val];
 
	cout << d << " " << p << endl;
 
	for (ll i = 0; i < m; i++)
	{
		if (!vis[i])
		{
			ll sum = 0;
			vis[i] = 1;
			ll value = 1ll << i;
			value += val;
			for (ll j = p; j < n; j++)
			{
				sum += a[i][j];
				res = min(tipsy(i, j + 1, value) + sum, res);
			}
			vis[i] = 0;
		}
	}
 
	return dp[d][p][val] = res;
 
}*/
 
 
 
 
 
/*
ll dp[200005][3][4];
string s;
 
ll tipsy(int i, int j, int k)
{
	if (i < 0 or j < 0) return 0;
 
	/*
	if (s[i] == 'a') dp[0]++;
	else if (s[i] == 'b') dp[1] = dp[0];
	else               dp[2] = dp[1];
	```
  if(dp[i][j]!=-1) return dp[i][j];
	ll res = 0;
	if (s[i] - 'a' == j)
	{
		if (j == 0)
		{
			res = 1 + tipsy(i - 1, j,k);
		}
		else if(j==1)
		{
			res += tipsy(i - 1, j, k);
			res += tipsy(i - 1, j - 1, k);
		}
		else if(j==2)
		{
 
 
 
		}
 
	}
	else if(s[i]=='?')
	{
		res+= tipsy(i-1,j,k+1);
	}
	else
	{
		res = tipsy(i - 1, j);
	}
 
  //cout << i << "  " << j << " " << res << endl;
	return dp[i][j] = res;
 
}
*/
 
ll modularExponentiation(ll x, ll n, ll mod)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)     //n is even
		return modularExponentiation((x * x) % mod, n / 2, mod);
	else                             //n is odd
		return (x * modularExponentiation((x * x) % mod, (n - 1) / 2, mod)) % mod;
 
}
ll modInverse(ll A, ll M)
{
	return modularExponentiation(A, M - 2, M);
}
 
//REAL CODE
void Birdperson()
{
	cin >> n >> m;
	string s;
	cin >> s;
	ll prev = n;
	ll curc = n;
 
	ll j = 0;
	ll zero = 0;
	ll one = 0;
	for (ll i = 0; i < sz(s); i = j)
	{
		if (s[i] == '0')
		{
			zero = 1;
			j = i + 1;
			while (j < sz(s) and s[j] == '0') j++, zero++;
		}
		else
		{
			if (!one)
			{
				one = 1;
 
			}
			else
			{
				//cout << zero << endl;
				if (zero * m < n)
				{
					curc += (zero * m);
				}
				else
				{
					curc += n;
				}
 
 
			}
			j = i + 1;
			while (j < sz(s) and s[j] == '1') j++;
		}
	}
 
	if (!one) cout << 0 << endl;
	else cout << curc << endl;
}
 
 
 
 
 
 
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	PEACE
	ll t = 1;
	ll ct = 1;
	cin >> t;
	while (ct <= t)
	{	//cout << "Case #" << ct << ": ";
 
		Birdperson();
 
		++ct;
	}
 
}