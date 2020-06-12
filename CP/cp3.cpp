#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,count_5=0,count_10=0,count_15=0,a,b;
        bool flag = true;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            b=a-5;
            if(b==0){
                count_5++;
            }else if(b==5){
                if(count_5>0){
                    count_10++;
                    count_5--;
                }else{
                    flag = false;
                }
            }else if(b==10){
                if(count_10>0){
                    count_15++;
                    count_10--;
                }else if(count_5>1){
                    count_15++;
                    count_5-=2;
                }else{
                    flag = false;
                }
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
