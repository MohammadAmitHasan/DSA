#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reverseStack(s);

    stack<int> newS;
    while (!s.empty())
    {
        newS.push(s.top());
        s.pop();
    }

    newS.push(x);

    while (!newS.empty())
    {
        s.push(newS.top());
        newS.pop();
    }
}

int main()
{
    return 0;
}