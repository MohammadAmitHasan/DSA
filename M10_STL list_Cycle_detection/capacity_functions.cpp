#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    myList.resize(2);    // resize to 2
    myList.resize(5);    // now the size is 2 and resizing to 5 with 0 value
    myList.resize(7, 2); // size is 5. Resizing to 7 with value 2
    for (int val : myList)
    {
        cout << val << " ";
    }
    myList.clear();            // clears the list
    cout << myList.max_size(); // Max capacity
    cout << myList.empty();    // return 1 if empty else 0
    return 0;
}