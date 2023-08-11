#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int bottles = 0;
        int i = 0;
        int n = s.length();

        while (i < n)
        {
            int count = 0;
            char type = s[i];

            while (i < n && s[i] == type)
            {
                i++;
                count++;
            }

            if (type == '1')
            {
                bottles += count;
            }
        }

        cout << bottles << endl;
    }

    return 0;
    return 0;
}