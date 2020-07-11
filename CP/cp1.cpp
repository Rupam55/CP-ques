#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    int arr[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]-97]+=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
// cd 520/A