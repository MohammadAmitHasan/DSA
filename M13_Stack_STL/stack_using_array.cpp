#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val); // O(1)
    }
    void pop()
    {
        v.pop_back(); // O(1)
    }
    int top()
    {
        return v.back(); // O(1)
    }
    int size()
    {
        return v.size(); // O(1)
    }
    bool empty() // O(1)
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    // Take input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Print top and Remove value
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}