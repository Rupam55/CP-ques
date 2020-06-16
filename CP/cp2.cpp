#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int gcd(int a, int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);  
}  

int main()
{
	int t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b;
		c=lcm(a,b);
		cout<<(c/a)*(c/b)<<"\n";		
	}
}
