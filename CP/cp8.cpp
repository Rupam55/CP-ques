#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    return v1[1] < v2[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> vect;
        int n,k;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            vector<int> v1;
            int a;
            cin>>a;
            v1.push_back(a);
            if(a%k==0){
                v1.push_back(0);
            }else{
                v1.push_back(k-(a%k));
            }
            vect.push_back(v1);
        }

        sort(vect.begin(), vect.end(), sortcol);

        int x=0;
        // for (int i = 0; i < n; i++)
        // {
        //     if(vect[i][1]>0){
        //         if(x>vect[i][1]){
        //             vect[i][1]+=k;
        //         }
        //         if(x<=vect[i][1]){
        //             x+=(vect[i][1]-x);
        //             x++;
        //             // cout<<i<<" "<<x<<" ""\n";
        //         }
        //     }
        // }
        // cout<<x<<"\n";
        for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++)
            cout << vect[i][j] << " ";
        cout << endl;
        }
    }
}
// suffix structure