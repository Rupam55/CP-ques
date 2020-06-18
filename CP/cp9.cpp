#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,a,rese=0,reso=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            if(i%2 != 0 && a%2 == 0){
                rese++;    
            }else if(i%2 == 0 && a%2 != 0){
                reso++;
            }
        }
        if(rese==reso){
            cout<<rese<<"\n";
        }else{
            cout<<-1<<"\n";
        } 
    }
    // Time();
}