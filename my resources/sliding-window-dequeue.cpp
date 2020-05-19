#include <bits/stdc++.h>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    std::deque<int> Qi(k);

    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back(); // Remove from rear
        Qi.push_back(i);
    }

    for (; i < n; ++i)
    {
        cout << arr[Qi.front()] << " ";

        while ((!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front(); // Remove from front of queue
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();

        Qi.push_back(i);
    }
    cout << arr[Qi.front()];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        printKMax(arr, a, b);
        cout << "\n";
    }
    return 0;
}
