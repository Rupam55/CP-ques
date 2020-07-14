#include<bits/stdc++.h>
using namespace std;

using vec = vector<int> ;
vec v ;

int find_it(int node){

	int cnt = 1;
	int curr = v[node]; node ++;
	while(curr != node){
		cnt ++;
		curr = v[curr-1] ;
	}
	
	return cnt;
}

void solve(){
	int n ; cin >> n;
	v = vector<int> (n) ;
	
	for(int &x : v){
		cin >> x ;
	}
	
	for(int i = 0 ; i < n ; i++){
		cout << find_it(i) <<" ";
	}
	cout << endl ;
	
}

int main()
{
	int q ;
	cin >> q;
	while(q--){
		solve() ;
	}

    return 0;
}