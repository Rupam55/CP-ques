#include <bits/stdc++.h>

using namespace std;
int n,p;
int cnt(int l,int r)
{
	int ans=INT_MAX;
	if(p<l)
	{
		ans=min(ans,p+n-l);
		ans=min(ans,r-p);
	}
	else if(p>r)
	{
		ans=min(ans,p-l);
		ans=min(ans,n-p+r);
	}
	else
	{
		ans=min(ans,p-l+r-l);
		ans=min(ans,r-p+r-l);
	}
	return ans;
}
int main()
{
	cin>>n>>p;
	string s;
	cin>>s;
	s="a"+s;
	int l=0,m=n/2;
	for(int i=1;i<=m;i++)
		if(s[i]!=s[n-i+1])
		{
			l=i;
			break;
		}
	if(l==0)
	{
		cout<<0;
		return 0;
	}
	int r;
	for(int i=m;i>=l;i--)
		if(s[i]!=s[n-i+1]||i==l)
		{
			r=i;
			break;
		}
	int ans=min(cnt(l,r),cnt(n-r+1,n-l+1));
	for(int i=l;i<=r;i++)
		if(s[i]!=s[n-i+1])
		{
			int t=max(s[i],s[n-i+1])-min(s[i],s[n-i+1]);
			ans+=min(t,26-t);
		}
	cout<<ans;
}