#include <bits/stdc++.h>

using namespace std;

int factorial(int x) 
{ 
    if (x <= 1) 
        return 1; 
    int res = 2; 
    for (int i = 3; i <= x; i++) 
        res = res * i; 
    return res; 
} 

int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<factorial(min(a, b));
   
}