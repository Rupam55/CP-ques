#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i = 0, check = true, a;
    char top;
    cin >> str;
    stack<char> s;
    while (i < str.length())
    {
        if (s.empty())
            a = i;
        if (str[i] == '[' || str[i] == '{' || str[i] == '(')
            s.push(str[i]);
        else
        {
            if ((str[i] == ']' || str[i] == '}' || str[i] == ')'))
            {
                if (s.empty())
                {
                    check = false;
                    break;
                }
                else
                {
                    top = s.top();
                    s.pop();
                    if ((top == '[' && str[i] != ']') || (top == '{' && str[i] != '}') || (top == '(' && str[i] != ')'))
                    {
                        check = false;
                        break;
                    }
                }
            }
        }
        i += 1;
    }
    if (check && s.empty())
        cout << "Success" << endl;
    else
    {
        if ((i >= str.size()) && !s.empty())
            cout << a + 1 << endl;
        else
            cout << i + 1 << endl;
    }
    return 0;
}