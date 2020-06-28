#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char> sta;
	int count=0;
    for(int i=0;i<n;i++){
        if(sta.empty()){
			sta.push(s[i]);
		}else{
			char c=sta.top();
			if(c=='U'){
				if(s[i]=='D'){
					sta.pop();
				}else{
					sta.push(s[i]);
				}
			}else{
				if(s[i]=='U'){
					sta.pop();
					if(sta.empty()){
						count++;
					}
				}else{
					sta.push(s[i]);
				}
			}
		}
    }
	cout<<count;
}