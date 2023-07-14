#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> counter;
    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            cin >> name;
            counter.push(name);
        }
        else
        {
            if (counter.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << counter.front() << endl;
                counter.pop();
            }
        }
    }

    return 0;
}