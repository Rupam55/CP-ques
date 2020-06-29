#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int dist_1=abs(a-c);
        int dist_2=abs(b-c);
        if(dist_2==dist_1){
            cout<<"Mouse C"<<"\n";
        }else if(dist_1<dist_2){
            cout<<"Cat A"<<"\n";
        }else{
            cout<<"Cat B"<<"\n";
        }
    }
}

// cat and mouse wala