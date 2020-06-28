#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double dist_x,dist_y,dist;
    dist_x=abs(x-x1);
    dist_y=abs(y-y1);
    dist=sqrt((dist_x*dist_x)+(dist_y*dist_y));
    if(fmod(dist,(r*2))==0){
        cout<<int(dist/(r*2));
    }else{
        cout<<int(dist/(r*2))+1;
    }
}

// amir and pins
