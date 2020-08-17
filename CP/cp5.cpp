#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    char ch;
    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> ch >> m1 >> ch >> d1;
    cin >> y2 >> ch >> m2 >> ch >> d2;
    int days1 = 0, days2 = 0;
    days1 += (365*y1 + y1/4 - y1/100 + y1/400 );
    days2 += (365*y2 + y2/4 - y2/100 + y2/400);

    days1 += d1;
    int i = 0;
    while (i < m1)
    {
        days1 += arr[m1];
        i++;
    }

    if(y1 % 4 == 0 || ( y1 % 100 == 0 && y1 % 400 == 0 ) && m1>= 2){
        days1+=1;
    }

    days2 += d2;
    i = 0;
    while (i < m2)
    {
        days2 += arr[i];
        i++;
    }

    if(y2 % 4 == 0 || ( y2 % 100 == 0 && y2 % 400 == 0 ) && m2>= 2){
        days2+=1;
    }

    cout<<abs(days1-days2)-2;
    return 0;
}
