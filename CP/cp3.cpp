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
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	bool flag =  false;
	int count =0;
	for (int i = n; i >= n; i--)
	{
		if(v[i] == 1){
			flag = true;
			count ++;
		}
		else if(v[i] == 0 && flag == true){
			v.pop_back();
		}
	}
	for (int i = 0; i < n; i++)
	{
		if(v[i] == 1){
			flag = true;
			count ++;
		}
		else if(v[i] == 0 && flag == true){
			int next = i+1,prev = i -1;
			if(next < n && v[next] != 0 && v[prev] != 0){
				count++;
			}
		}
	}
	cout<<count;
}
// cf div3 661 q2
