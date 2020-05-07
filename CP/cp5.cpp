#include <bits/stdc++.h>
#include<cmath>
#include<string.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; 

int main(){
    int n;
    cin>>n;
    while(n--){
        string s,s1;
        cin>>s;
        for (int i = 0; i < s.length(); i++){
            if(i==0 && isupper(s[i])){
                s1+=tolower(s[i]);
            }else if(i!=0 && isupper(s[i])){
                s1+='_';
                s1 += tolower(s[i]);
            }else{
                s1+=s[i];
            }
        }
        cout<<s1;
    }   
} 