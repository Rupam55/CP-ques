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
#define pob pop_back
#define pb push_back

#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'
#define inf 1e14

#define invec(v)     \
    for (auto x : v) \
        cin >> x;
template <typename T, typename L>
bool mycomp(T x, L y)
{
    return x > y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int C=0,A=0,max=INT_MIN,maxc=INT_MIN;
        for (int i = 0; i < s.length(); i++){
            if(s[i]=='A'||s[i]=='?'){
                A++;
                if(A>max){
                    max=A;
                }
            }else if(s[i]=='C'){
                A--;
            }
            if(s[i]=='C'||s[i]=='?'){
                C++;
                if(C>maxc){
                    maxc=C;
                }
            }else if(s[i]=='A'){
                C--;
            }
        }
        if(max>maxc){
            cout<<max<<"\n";
        }else{
            cout<<maxc<<"\n";
        }
    }
}