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

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r,c;
        cin>>r>>c;
        string s,s1;
        char arr[r][c],brr[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                brr[i][j]='*';
            }
            
        }
        
        unordered_map<char, int> mp;
        for (int i = 0; i < r ; i++)
        {
            cin>>s;
            for (int j = 0; j < s.length(); j++)
            {
                arr[i][j]=s[j];
                mp.insert(pair<char,int>(arr[i][j],0));
            }
        }

        while()

        // for (auto x : mp)
        // {
        //     if(x.second==0){
        //         int hey = 1;
        //         for (int i = 0; i < r; i++)
        //         {
        //             for (int j = 0; j < c; j++)
        //             {

        //                 if (arr[i][j] == x.first)
        //                 {
        //                     if (arr[i][j] == arr[i + 1][j] || i == r - 1)
        //                     {
        //                         // cout << x.first << i<<" " <<j<< " ";
        //                     }
        //                     else
        //                     {
        //                         hey = 0;
        //                         x.second = 2;
        //                     }
        //                 }
        //             }
        //     }
        //     if(hey==1){
        //         char ch=x.first;
        //         for (int i = 0; i < r; i++)
        //         {
        //             for (int j = 0; j < c; j++)
        //             {
        //                 if (arr[i][j] == x.first)
        //                 {
        //                     brr[i][j]=arr[i][j];
        //                 }
        //             }
        //         }
        //         x.second=1;
        //         s1 += x.first;
        //         cout<<"y";
        //     }
        //     }
        // }
        // for (auto x : mp)
        //     cout << x.first << " " << x.second << endl;

        // for (auto x : mp)
        // {
        //     if(x.second==0){
        //         for (int i = 0; i < r; i++)
        //         {
        //             for (int j = 0; j < c; j++)
        //             {
        //                 if(arr[i][j]==x.first){
        //                     if(brr[i+1][j]!='*' || i==r-1){
        //                         brr[i][j]=x.first;
        //                     }
        //                 }
        //             }
        //         }
        //         s1+=x.first;
        //     }
        // }
        //     cout << "Case #" << i + 1 << ": " << s1 << "\n";
        // }

    // Time();
}