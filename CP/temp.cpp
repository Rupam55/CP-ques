// C++ program to print all pairs 
// with equal sum 

#include <bits/stdc++.h> 
using namespace std; 

// Function to print all pairs 
// with equal sum 
void pairWithEqualSum(int A[], int n) 
{ 

	map<int, vector<pair<int, int> > > mp; 

	// Insert all unique pairs and their 
	// corresponding sum in the map 
	for (int i = 0; i < n - 1; i++) { 
		for (int j = i + 1; j < n; j++) { 
			pair<int, int> p = make_pair(A[i], A[j]); 

			mp[A[i] + A[j]].push_back(p); 
		} 
	} 

	// Traverse the map mp, and for sum 
	// with more than one pair, print all pairs 
	// and the corresponding sum 
	for (auto itr = mp.begin(); itr != mp.end(); itr++) { 
		if (itr->second.size() > 1) { 
			cout << "Pairs : "; 

			for (int i = 0; i < itr->second.size(); i++) { 
				cout << "( " << itr->second[i].first << ", "
					<< itr->second[i].second << ") "; 
			} 

			cout << " have sum : " << itr->first << endl; 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	int A[] = { 1,2,3,4,5 }; 

	int n = sizeof(A) / sizeof(A[0]); 

	pairWithEqualSum(A, n); 

	return 0; 
} 
