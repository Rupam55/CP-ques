#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> c;
    int count=0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i]=='('){
            c.push('(');
        }else if(s[i]==')'){
            if(c.empty()){

            }else{
                count+=2;
                c.pop();
            }
        }
    }
    cout<<count;
        
}

