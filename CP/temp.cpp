#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,num=0;
    string s;
    stack<int> mystack,dummy;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if(s=="push"){
            cin>>num;
            mystack.push(num);
            if(dummy.size()==0){
                dummy.push(num);
            }else{
                if(dummy.top()<num){
                    dummy.push(num);
                }else{
                    dummy.push(dummy.top());
                }
            }
        }else if(s=="pop"){
            mystack.pop();
            dummy.pop();
        }else if(s=="max"){
            cout<<dummy.top()<<"\n";
        }
    }
    

}