#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++){
        cin>>arr[i];
    }
    cin>>m;
    deque<int> Qi(m);
    int i; 
	for (i = 0; i <m; ++i) {
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]){
            Qi.pop_back();
        }

        Qi.push_back(i);
    }
    for (; i <n; ++i) { 
		cout << arr[Qi.front()] << " "; 

		while ((!Qi.empty()) && Qi.front() <= i - m) 
			Qi.pop_front(); 

		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
			Qi.pop_back(); 
 
		Qi.push_back(i); 
	}
    cout << arr[Qi.front()];
}

