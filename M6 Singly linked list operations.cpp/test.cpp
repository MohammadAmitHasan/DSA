#include <bits/stdc++.h>
using namespace std;

// void fun(int* p) {  // Creates a new pointer variable for the function
//     p = NULL;
// }
void fun(int*& p) {  // it passes the address
    p = NULL;
}

int main() {
    int val = 10;
    int* ptr = &val;
    fun(ptr);
    cout << ptr << endl;  // value will be null

    return 0;
}