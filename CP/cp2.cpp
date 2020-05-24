#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
	int n,t,a;
	cin>>n>>t;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	int sum=0,count=0,k=0;
	for (int i = 0; i < n; i++)
	{
		sum+=v[i];
		if(sum<=t){
			count++;
		}else{
			sum-=v[k];
			k++;
		}
	}
	cout<<count;
	
	
}
//ladder ques 22