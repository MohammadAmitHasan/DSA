#include <bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> newS;
    while (!q.empty())
    {
        newS.push(q.front());
        q.pop();
    }
    while (!newS.empty())
    {
        q.push(newS.top());
        newS.pop();
    }
    return q;
}

int main()
{

    return 0;
}