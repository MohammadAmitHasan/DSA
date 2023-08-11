#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, maxCount = 0, maxValue = INT_MIN;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
            if (mp[a] > maxCount)
            {
                maxCount = mp[a];
                maxValue = a;
            }
            else if (mp[a] == maxCount && a > maxValue)
            {
                maxCount = mp[a];
                maxValue = a;
            }
        }
        cout << maxValue << " " << maxCount << endl;
    }
    return 0;
}