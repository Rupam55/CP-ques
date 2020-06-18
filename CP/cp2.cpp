#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	for (size_t i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());

	map<string, int> mp;
	string s;

	for (size_t i = 0; i < m; i++)
	{
		cin>>s;
		mp[s]++;	
	}

	vector<pair<string,int>> vec;

	copy(mp.begin(),
			mp.end(),
			back_inserter<vector<pair<string,int>>>(vec));

	std::sort(vec.begin(), vec.end(),
			[](const pair<string,int>& l, const pair<string,int>& r) {
				if (l.second != r.second)
					return l.second > r.second;

				return l.first < r.first;
			});

	int sum=0,i=0;

	for (auto const &pair: vec) {
		sum+=pair.second*v[i];
		i++;
	}
	cout<<sum<<" ";
	
	sort(v.begin(),v.end(),greater<int>());

	sum=0,i=0;

	for (auto const &pair: vec) {
		sum+=pair.second*v[i];
		i++;
	}
	cout<<sum<<" ";
		

}
