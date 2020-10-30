#include<bits/stdc++.h> 
using namespace std; 

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll divSum(ll num) 
{ 
	ll result = 0; 

	for (ll i=1; i<=sqrt(num); i++) 
	{ 
		if (num%i==0) 
		{ 
			if (i==(num/i)) 
				result += i; 
			else
				result += (i + num/i); 
		} 
	} 

	return (result + 1); 
}

int main() 
{ 
	ll num = 5; 
	cout << divSum(num); 
	return 0; 
} 
