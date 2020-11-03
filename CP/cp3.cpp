#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<ll> vi;
typedef pair<ll, ll> pl;
typedef pair<ll, ll> pi;

#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a.begin(), a.end())
#define ds(a) sort(a.begin(), a.end(), greater<ll>())
#define vs(v) sort(v.begin(), v.end())
#define nl cout << endl;
#define F first
#define S second
#define Time() cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
// clear input stream berore it
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
// getline(cin, str);

ll inf = 1e18;
ll mod = 1e9 + 7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int month_arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (i != 2 && i != 5)
        {
            if (int(s[i]) < 48 || int(s[i]) > 57)
            {
                // cout<<"np";
                return false;
            }
        }
    }

    string s1 = "", s2 = "", s3 = "";

    s1 += s[3];
    s1 += s[4];

    s2 += s[6];
    s2 += s[7];
    s2 += s[8];
    s2 += s[9];

    s3 += s[0];
    s3 += s[1];


    ll month = stoll(s1);
    ll year = stoll(s2);
    ll date = stoll(s3);

    if (year < 2013 || year > 2015)
    {
        // cout<<year;
        return false;
    }
    if (month < 1 || month > 12)
    {
        // cout<<month;
        return false;
    }
    if (date < 1 || date > month_arr[month - 1])
    {
        // cout<<year;
        return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1 = "";
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-' && s[i + 3] == '-' && i + 7 < s.length())
        {
            s1 = "";
            s1 += s[i - 2];
            s1 += s[i - 1];
            s1 += s[i];
            s1 += s[i + 1];
            s1 += s[i + 2];
            s1 += s[i + 3];
            s1 += s[i + 4];
            s1 += s[i + 5];
            s1 += s[i + 6];
            s1 += s[i + 7];
            if (check(s1))
            {
                mp[s1]++;
            }
        }
    }

    int more = INT_MIN;
    string s2 = "";

    for (auto it : mp)
    {
        // cout << it.first << " " << it.second;
        if(more < it.second){
            s2 = it.first;
            more = it.second;
        }
        // nl
    }

    cout<<s2;
    return 0;
}