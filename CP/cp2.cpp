#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 


#define F first
#define S second
#define pob pop_back
#define pb push_back
#define Time()	cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x)	cerr << #x << " = " << (x) << '\n'
#define inf 1e14
#define invec(v) for(auto x : v)cin>>x;
template <typename T ,typename L> bool mycomp(T x,L y) { return x > y ;}
struct trio{
	ll bks,dys,spd;
}
int main()
{
	ll B,L,D;int x;
	cin>>B>>L>>D;
	vector<ll> scores(B);
	for(ll& i:scores)cin>>i;
	vector<trio> lib(L);
	bitsets<1000> lbooks[L];
	for(int i=0;i<L;i++){
		cin>>lib[i].bks>>lib[i].dys>>lib[i].spd;
		for(ll j=0;j<lib[i].bks;j++){
			cin>>x;
			lbooks[i].set(x);
		}
	} 
	return 0;
}