#include <bits/stdc++.h>
using namespace std;

void insertInMinHeap(vector<int> &v)
{
    int x;
    cin >> x;
    v.push_back(x);
    int currentIndex = v.size() - 1;
    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[parentIndex] > v[currentIndex])
            swap(v[parentIndex], v[currentIndex]);
        else
            break;
        currentIndex = parentIndex;
    }
}
void deleteFromMinHeap(vector<int> &v)
{
    if (v.size() < 1)
        return;
    v[0] = v[v.size() - 1];
    v.pop_back();
    int current = 0;
    while (true)
    {
        int leftIndex = current * 2 + 1;
        int rightIndex = current * 2 + 2;
        int last_idx = v.size() - 1;
        if (leftIndex <= last_idx && rightIndex <= last_idx)
        {
            if (v[leftIndex] <= v[rightIndex] && v[leftIndex] < v[current])
            {
                swap(v[leftIndex], v[current]);
                current = leftIndex;
            }
            else if (v[rightIndex] <= v[leftIndex] && v[rightIndex] < v[current])
            {
                swap(v[rightIndex], v[current]);
                current = rightIndex;
            }
            else
            {
                break;
            }
        }
        else if (leftIndex <= last_idx)
        {
            if (v[leftIndex] < v[current])
            {
                swap(v[leftIndex], v[current]);
                current = leftIndex;
            }
            else
            {
                break;
            }
        }
        else if (rightIndex <= last_idx)
        {
            if (v[rightIndex] < v[current])
            {
                swap(v[rightIndex], v[current]);
                current = rightIndex;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        insertInMinHeap(v);
    }

    int numberOfQ;
    cin >> numberOfQ;
    while (numberOfQ--)
    {
        int q;
        cin >> q;
        if (q == 0)
        {
            insertInMinHeap(v);
            cout << v[0] << endl;
        }
        else if (q == 1)
        {
            if (v.size() > 0)
                cout << v[0] << endl;
            else
                cout << "Empty" << endl;
        }
        else if (q == 2)
        {
            deleteFromMinHeap(v);
            if (v.size() > 0)
                cout << v[0] << endl;
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}