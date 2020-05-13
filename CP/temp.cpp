#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,count;
    int capacity;
    cin >> t;
    

    while(t--){
        cin >> capacity;
        int GR[capacity];
        int OP[capacity];
        count=0;
        for (int i = 0; i < capacity; i++){
            cin>>GR[i];
        }
        for (int i = 0; i < capacity; i++){
            cin>>OP[i];
        }
        sort(GR,GR+capacity);
        sort(OP,OP+capacity);
        int i=0,j=0;
        while(i < capacity && j < capacity){
            if(GR[i]>OP[j]){
                count++;
                i++;j++;
            }else{
                i++;
            }
        }
        cout<<count<<"\n";
    }
}