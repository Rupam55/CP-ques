#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool comp(string a,string b)
{
    if(a.length()<=b.length() && b.substr(0,a.length())==a){
        return false;
    }else if(b.length()<=a.length() && a.substr(0,b.length())==b){
        return true;
    }else{
        return a<b;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;
	vector<string>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
    sort(v.begin(),v.end(),comp);
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\n";
	}
    return 0;
}