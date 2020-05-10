#include <bits/stdc++.h>

using namespace std;

#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x) cerr << #x << " = " << (x) << '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,index;
    bool flag=false;
    cin>>n;
    string s,name;
    unordered_map<int, string> mp;
    while(n--){
        cin>>s;
        if(s=="add"){
            cin>>index>>name;
            // mp.insert({index,name});
            mp[index]=name;
        }else if(s=="find"){
            cin>>index;
            if (mp[index]==""){
                cout<<"not found"<<"\n";
            }else{
                cout << mp[index] << "\n";
            }

            // flag=false;
            // for (auto x : mp){
            //     if(x.first==index){
            //         flag=true;
            //         cout<<x.second<<"\n";
            //     }
            // }
            // if(flag==false){
            //     cout<<"not found"<<"\n";
            // }
        }else if(s=="del"){
            cin>>index;
            mp.erase(index);
            // for (auto x : mp){
            //     if(x.first==index){
            //         mp[index]="not found";
            //     }
            // }
        }
    }
}
