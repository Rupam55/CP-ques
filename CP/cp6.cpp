#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	map<int,int>mp;
	int maxi=INT_MIN,pos=0;
	for (int i = 0; i < n; i++)
	{
		mp[arr[i]]=mp[arr[i]-1]+1;

		if(mp[arr[i]] > maxi){
			maxi=mp[arr[i]];
			pos=arr[i];
		}
	}
	vector<int>brr;
	for (int i = n-1; i >= 0; i--)
	{
		if(arr[i] == pos){
			brr.push_back(i);
			pos--;
		}
	}
	reverse(brr.begin(),brr.end());
	cout<<maxi<<"\n";
	for(auto it : brr){
		cout<<it+1<<" ";
	}
	return 0;
}
// dev