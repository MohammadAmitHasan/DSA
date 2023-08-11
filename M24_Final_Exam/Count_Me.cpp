#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int max = 0;
        string wordName;
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                wordName = word;
                max = mp[word];
            }
        }
        cout << wordName << " " << max << endl;
    }
    return 0;
}