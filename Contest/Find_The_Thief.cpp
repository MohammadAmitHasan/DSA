#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> countMap;
        for (int i = 0; i < n; i++)
        {
            int code;
            cin >> code;
            countMap[code]++;
        }

        int thiefPearlCode = 0;
        for (auto it : countMap)
        {
            if (it.second % 2 != 0)
            {
                thiefPearlCode = it.first;
                break;
            }
        }

        cout << thiefPearlCode << endl;
    }

    return 0;
}