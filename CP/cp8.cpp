// AccurateLee
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s1 = "";
        cin >> s;
        bool flag = true;
        bool one = true;
        while (n > 0 && flag)
        {
            --n;
            if (s[n] == '1' && one)
            {
                s1 += s[n];
            }
            else if (s[n] == '1' && !one)
            {
                flag = false;
            }
            else if (s[n] == '0')
            {
                one = false;
            }
        }
        if(flag==false)
        s1+='0';
        bool zero = true;
        int i=0;
        while(zero){
            if(s[i]=='0'){
                s1+=s[i];
            }else{
                zero=false;
            }
            i++;
        }
        reverse(s1.begin(), s1.end());
        cout << s1 << "\n";
    }
}