#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList(10, 5); // init a list of length 10 with all 5 values

    list<int> list2 = {1, 2, 3, 4, 5};
    list<int> myList2(list2); // init with another list

    int a[5] = {10, 20, 30, 40, 50};
    list<int> myList3(a, a + 5); // int with an array data

    vector<int> v = {100, 200, 300, 400, 500};
    list<int> myList4(v.begin(), v.end()); // init with a vector data

    // cout << myList.size() << endl;  // count size
    // cout << myList.front() << endl; // get first value

    for (auto i = myList.begin(); i != myList.end(); i++)
    {
        cout << *i << endl;
    }

    for (int val : myList4) // shortcut loop to get only value
    {
        cout << val << " ";
    }

    return 0;
}