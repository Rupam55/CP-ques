#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string arr[3];
    bool flag=true;
    for (size_t i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    if(arr[0][0]!=arr[2][2]){
        flag=false;
    }else if(arr[0][1]!=arr[2][1]){
        flag=false;
    }else if(arr[0][2]!=arr[2][0]){
        flag=false;
    }else if(arr[1][0]!=arr[1][2]){
        flag=false;
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}
