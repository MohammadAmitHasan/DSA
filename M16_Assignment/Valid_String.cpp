#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        stack<char> s;
        for (char c : str)
        {
            if (!s.empty() && s.top() != c)
            {
                s.pop();
            }
            else
            {
                s.push(c);
            }
        }

        if (s.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}