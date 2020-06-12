#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0,arr[s.length()]={0};
		for (int i = 0; i < s.length(); i++)
		{
			if(s[i]=='x' && arr[i]==0){
				if(s[i+1]=='y' && arr[i+1]==0){
					count++;
					arr[i]=1;arr[i+1]=1;
				}else if(i>0 && s[i-1]=='y'&& arr[i-1]==0){
					count++;
					arr[i]=1;arr[i-1]=1;
				}
			}else if(s[i]=='y' && arr[i]==0){
				if(s[i+1]=='x' && arr[i+1]==0){
					count++;
					arr[i]=1;arr[i+1]=1;
				}else if(s[i-1]=='x' && arr[i-1]==0){
					count++;
					arr[i]=1;arr[i-1]=1;
				}
			}
		}
		cout<<count<<"\n";
	}
}

// code chef june long q2