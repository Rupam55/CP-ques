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
    string s;
    cin>>s;
    string s1,s2,s3;
    s1+=s[0];s1+=s[1];
    s2 += s[3]; s2 += s[4];
    s3 += s[6]; s3 += s[7];
    int h = stoi(s1);
    int m = stoi(s2);
    int se = stoi(s3);
    int time = h*3600+m*60+se;
    int n;
    cin>>n;
    while(n--){
        cin >> s;
        string s1, s2, s3;
        s1 += s[0];
        s1 += s[1];
        s2 += s[3];
        s2 += s[4];
        s3 += s[6];
        s3 += s[7];
        int h1 = stoi(s1);
        int m1 = stoi(s2);
        int se1 = stoi(s3);
        int time1 = h1 * 3600 + m1 * 60 + se1;
        if(time==time1){
            cout<<"now"<<"\n";
        }else{
            if(time-time1<60){
                if(time-time1==1){
                    cout << time-time1 << " second ago"<<"\n";
                }else{
                    cout << time-time1 << " seconds ago"<<"\n";
                }
            }else if(time-time1<3600){
                if(time-time1>=60&&time-time1<120){
                    cout << (time-time1)/60 << " minute ago"<<"\n";
                }else{
                    cout << (time-time1)/60 << " minutes ago"<<"\n";    
                }
            }else{
                if(time-time1>=3600&&time-time1<=7200){
                    cout<<(time-time1)/3600<<" hour ago"<<"\n";
                }else{
                    cout << (time-time1)/3600 << " hours ago"<<"\n";
                }
            }
        }
    }
}