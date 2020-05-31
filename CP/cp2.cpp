#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main()
{
	int n,t,m=0,num=0;
	cin>>n;
	vector<int> v (n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
		if(i>1){
			if(v[i]==(v[i-1]+v[i-2])){
				num++;
			}else{
				if(num>m){
					m=num;
				}
				num=2;
			}
		}else{
			num++;
			m++;
		}
	}
	cout << max(m,num) ;
	
}
//ladder ques 27