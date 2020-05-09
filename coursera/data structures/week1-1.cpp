#include <bits/stdc++.h>

using namespace std;

int c = 0;
vector<vector<int>> vect;

void heapify(int arr[], int n, int i)
{
    int largest = i;   // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] < arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] < arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        c++;
        vector<int> v1;
        v1.push_back(largest);
        v1.push_back(i);
        vect.push_back(v1);
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n)
{
    int startIdx = (n / 2) - 1;

    for (int i = startIdx; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void printHeap(int arr[], int n)
{
    for (int i = 0; i < vect.size(); ++i){
        cout<<vect[i][0] <<" "<<vect[i][1] <<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buildHeap(arr, n);
    cout << c << "\n";
    printHeap(arr, n);
    return 0;
}
