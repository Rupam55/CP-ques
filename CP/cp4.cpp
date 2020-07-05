#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

struct card
    {
        string name;

        int t=0;
        int p=0;
        int g=0;
    };

string delSpaces(string &str) 
{
   str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
   return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    string s,q,ns;
    cin >> n;
    card c[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>m>>s;
        c[i].name=s;
        for (ll j = 0; j < m; j++)
        {
            bool t=true,p=true,g=true;
            cin>>q;
            ns="";
            for (ll k = 0; k < q.length(); k++)
            {
                if(q[k]>=49 && q[k]<= 57){
                    ns+=q[k];
                }
            }   
            for (ll k = 1; k < ns.length(); k++)
            {
                    if(ns[k]!=ns[k-1]){
                        t=false;
                    }if(ns[k]>=ns[k-1]){
                        p=false;
                    }
            }
            if(t==true){
                c[i].t++;
            }else if(p==true){
                c[i].p++;
            }else{
                c[i].g++;
            }
        }
    }
    int maxt=INT_MIN,maxp=INT_MIN,maxg=INT_MIN;
    string anst="", ansp="", ansg="";
    for (ll i = 0; i < n; i++)
    {
        if(c[i].t>=maxt){
            maxt=c[i].t;
        }
        if(c[i].p>=maxp){
            maxp=c[i].p;
        }
        if(c[i].g>=maxg){
            maxg=c[i].g;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if(c[i].t==maxt){
            anst+=" ";
            anst+=c[i].name;
            anst+=',';
        }
        if(c[i].p==maxp){
            ansp+=" ";
            ansp+=c[i].name;
            ansp+=',';
        }
        if(c[i].g==maxg){
            ansg+=" ";
            ansg+=c[i].name;
            ansg+=',';
        }
    }
    anst[anst.length()-1]='.';
    ansp[ansp.length()-1]='.';
    ansg[ansg.length()-1]='.';
    
    cout<<"If you want to call a taxi, you should call:"<<anst<<"\n";
    cout<<"If you want to order a pizza, you should call:"<<ansp<<"\n";
    cout<<"If you want to go to a cafe with a wonderful girl, you should call:"<<ansg<<"\n";
}