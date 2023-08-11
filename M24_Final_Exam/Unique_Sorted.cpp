#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int n;
        cin >> n;
        vector<int> v;
        while (n--)
        {
            int v;
            cin >> v;
            s.insert(v);
        }
        for (auto it = s.rbegin(); it != s.rend(); it++)
        {
            v.push_back(*it);
        }

        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}