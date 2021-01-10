#include <bits/stdc++.h>

using namespace std;

int LRA(vector<int> &heights)
{

    int len = heights.size();
    stack<int> sta;
    int val = 0;

    for (int i = 0; i <= heights.size(); i++)
    {
        int curr = (i == heights.size()) ? 0 : heights[i];

        if (!sta.empty() && curr <= heights[sta.top()])
        {
            while (!sta.empty() && curr < heights[sta.top()])
            {
                int tp = sta.top();
                sta.pop();
                val = max(val, heights[tp] * (sta.empty() ? i : i - 1 - sta.top()));
            }
            sta.push(i);
            val = max(val, curr);
        }
        else
        {
            sta.push(i);
            val = max(val, curr);
        }
    }
    return val;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<LRA(arr);
}