#include <bits/stdc++.h>

using namespace std;

#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n,index;
    bool flag = false;
    cin >> m >> n;
    string s,name;
    multimap<int, string> mp;
    while(n--){
        cin>>s;
        if(s=="add"){
            cin>>index>>name;
            mp.insert({index, name});
        }else if(s=="find"){

        }else if(s=="del"){

        }else if(s=="check"){

        }
    }
    for (auto itr = mp.find(3); itr != mp.end(); itr++) 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
}
