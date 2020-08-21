#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fr1(i, n) for (int i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

int infi = 1000000007;

bool check_prime(int n){
	if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n == 1){
            cout<<"FastestFinger";
            nl
        }
        else if(n & 1 || n == 2){
            cout<<"Ashishgup";
            nl
        }else{
            if(!(n&(n-1))){
                cout<<"FastestFinger";
                nl
            }else{
                int i = 4;
                bool flag = false;
                while(i < n){
                    if(n%i == 0){
                        flag = true;
                    }
                    i *= 2;
                }
                if(flag){
                    cout<<"Ashishgup";
                    nl
                }else{
                    if(check_prime(n/2)){
                        cout<<"FastestFinger";
                        nl
                    }else{
                        cout<<"Ashishgup";
                        nl
                    }
                }
            }
        }
    }
}
// dev
