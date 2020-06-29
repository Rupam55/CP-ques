#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int maxi = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,count=0;
        cin>>a;
        bool flag=true;
        while(a!=1){
            if(a%6==0){
                a=a/6;
                count++;
            }else{
                if(a%2==0){
                    flag=false;
                    a=1;
                }else{
                    a=a*2;
                    count++;
                }
            }
        }
        if(flag==true){
            cout<<count<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}