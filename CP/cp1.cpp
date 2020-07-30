#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main() {
    int k, r, h = 1, i = 0, j = 1;
    cin >> k >> r;
    bool b = true;
    while (b) {
        i++;
        h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            b = false;
        }
    }
    cout << i;
}
// drago
// B. Polycarp Training
