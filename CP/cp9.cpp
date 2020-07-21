#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    bool flag =true;
    if(a.size()!=b.size()){
        cout<<"NO";
    }else{
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){/[]
                if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
                
                }else{
                    flag=false;
                }    
            }else{
                if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
                    flag=false;
                }
            }
        }
        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
}
// Superhero Transformation
