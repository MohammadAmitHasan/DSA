#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    queue<int> q;
    stack<int> s;

    bool isSame = true;

    int val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        s.push(val);
    }

    if (q.size() == s.size())
    {
        while (!q.empty())
        {
            if (q.front() != s.top())
            {
                isSame = false;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }
    }
    else
    {
        isSame = false;
    }

    if (isSame)
        cout << "YES";
    else
        cout << "NO";
}