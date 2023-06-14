#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int val;
    Node* next;  // next mode address
};

int main() {
    Node a, b;
    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.val << endl;
    cout << a.next->val << endl;  // a.next is the address of 2nd group. -> access the value
    return 0;
}