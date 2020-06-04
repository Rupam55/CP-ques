#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
	string s;
	cin>>s;
	int n=0,m=0;
	for (int i = 0; i < s.length(); i++)
	{
		if(s[i]=='4'){
			n++;
		}else if(s[i]=='7'){
			m++;
		}
	}
	if(m==0&&n==0){
		cout<<"-1";
	}else if(m==n){
		cout<<"4";
	}else if(m>n){
		cout<<"7";
	}else{
		cout<<"4";
	}
	
}
//ladder ques 27