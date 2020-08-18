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
		vector<int> arr(n);
		bool even = false;
		int p_e = 0;
		int odd = 0;
		vector<int> p_o;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0){
				even = true;
				p_e = i;
			}
			else{ 
				odd++;
				p_o.push_back(i);
			}
		}
		if (even)
		{
			cout << 1 << "\n" << p_e + 1 << "\n";
		}
		else if (odd > 1)
		{
			cout << 2 << "\n" <<p_o[0]+1<<" "<<p_o[1]+1<<"\n";
		}else{
			cout<<-1<<"\n";
		}
	}

	return 0;
}
//
