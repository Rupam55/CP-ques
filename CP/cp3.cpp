#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    stack<int> mystack;
    stack<int> dummy;
    long long int n, c = -1000, i, value, k = 0, l = 0, j, max;
    long int max_array[100000], array[5000];
    cin >> n;
    max = -1000;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "pop")
        {
            if (mystack.top() == max)
            {
                for (j = 0; j < k; j++)
                {
                    if (c < array[j])
                        c = array[j];
                }
            }
            max = c;
            c = -1000;
            mystack.pop();
        }
        else if (s == "max")
        {
            //			dummy=mystack;
            //			while(!dummy.empty())
            //			{
            //				if(max<dummy.top())
            //				{
            //					max=dummy.top();
            //				}
            //				dummy.pop();
            //			}
            max_array[l] = max;
            l++;
        }
        else
        {
            cin >> value;
            if (value > max)
                max = value;
            array[k] = value;
            k++;
            mystack.push(value);
        }
    }
    for (i = 0; i < l; i++)
    {
        cout << max_array[i] << "\n";
    }
    return 0;
}
//ladder ques 35