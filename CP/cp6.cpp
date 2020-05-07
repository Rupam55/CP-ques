#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool sortByVal(const pair<int, int> &a,const pair<int, int> &b){
    if (a.second == b.second){
        return (a.first < b.first);
    }else{
        return (a.second < b.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<pair<int, int>> vec;

    for (auto x : mp){
        vec.push_back(make_pair(x.first, x.second));
    }

    sort(vec.begin(), vec.end(), sortByVal);

    for (int i = vec.size()-1; i >= 0; i--){
        cout << vec[i].first <<" " ;
    }
    // code end
    
}