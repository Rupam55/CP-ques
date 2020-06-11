#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

int main()
{
    string s,n,res;
    cin>>s;
    int i=0;
    while(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
        n+=s[i];
        i++;
        cout<<"1.2";
    }
    cout<<n.length()<<s.length();
    int j=n.length()-1;
    while(i<s.length()){
        if(isupper(s[i])){
            if(islower(s[i+1])){
                res.push_back(s[i+1]);
                res.push_back(s[i]);
                i+=3;
                cout<<1;
            }
        }else if(s[i]=='0'){
            // if(n.length()==0){
            //     res.push_back(n[i]);
            //     i++;
            //     cout<<2;    
            // }else{
            //     res.push_back(n[j]);
            //     j--;
            //     i++;
            //     cout<<3;
            // }
        }else{
            res.push_back(s[i]);
            i++;
        }
    }
    cout<<res;
    return 0;
}
