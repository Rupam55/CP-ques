#include <bits/stdc++.h>
#include <cmath>
#include <string.h>
 
using namespace std;
using namespace std::chrono;
 
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;
 
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'
#define inf 1e14
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,m,a,b,count;
    cin>>t;
    while(t--){
        cin>>n>>m;
        a=n/m;
        b=n%m;
        count=1;
        if(a>0){
            if((b+a)%2==0){
                if(a%2==0){
                    cout<<"YES"<<"\n";
                    for(int i=0;i<m-1;i++){
                        cout<<a<<" ";
                    }cout<<a+b<<"\n";
                }else{
                    if(a==1){
                        cout<<"NO"<<"\n";
                    }else{
                        if((m-1)%2==0){
                            cout<<"YES"<<"\n";
                            for(int i=0;i<(m-1)/2;i++){
                                cout<<a-1<<" ";
                            }for(int i=0;i<(m-1)/2;i++){
                                cout<<a+1<<" ";
                            }
                            cout<<a+b<<"\n";
                        }else{
                            cout<<"NO"<<"\n";
                        }
                    }
                }
            }else{
                if(a%2!=0){
                    cout<<"YES"<<"\n";
                   for(int i=0;i<m-1;i++){
                       cout<<a<<" ";
                   }cout<<a+b<<"\n";
                }else{
                    if((m-1)%2==0){
                        cout<<"YES"<<"\n";
                        for(int i=0;i<(m-1)/2;i++){
                                cout<<a-1<<" ";
                            }for(int i=0;i<(m-1)/2;i++){
                                cout<<a+1<<" ";
                            }
                            cout<<a+b<<"\n";
                    }else{
                        cout<<"NO"<<"\n";
                    }
                }
            }
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
// ques 2 date 9:5:2020