#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int countKdivPairs(int A[], int n, int K)
{
	int freq[K] = {0};

	for (int i = 0; i < n; i++)
		++freq[A[i] % K];

	int sum = freq[0] * (freq[0] - 1) / 2;

	for (int i = 1; i <= K / 2 && i != (K - i); i++)
		sum += freq[i] * freq[K - i];
	// If K is even
	if (K % 2 == 0)
		sum += (freq[K / 2] * (freq[K / 2] - 1) / 2);
	return sum;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int A[n];
	for (int i = 0; i < n; i++)
	{
		cin>>A[i];
	}
	cout << countKdivPairs(A, n, k);
	return 0;
}
