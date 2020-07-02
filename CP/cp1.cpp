#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int reversDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,k,c,count=0;
    cin>>a>>b>>k;
    for (int i = a; i <= b; i++)
    {
        c=reversDigits(i);
        if(abs(i-c)%k==0){
            count++;
        }
    }
    cout<<count;
}
// HR Beautiful Days at the Movies

