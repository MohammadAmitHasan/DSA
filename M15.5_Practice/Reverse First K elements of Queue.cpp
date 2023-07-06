#include <bits/stdc++.h>
using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> s;
    queue<int> newQ;
    for (int i = 0; i < k; i++)
    {
        // cout << q.front() << " " << k << endl;
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        newQ.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        newQ.push(q.front());
        q.pop();
    }

    return newQ;
}

int main()
{

    return 0;
}