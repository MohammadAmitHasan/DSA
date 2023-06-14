#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int val;
    Node* next;  // next mode address
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node a(10);
    Node b(20);
    a.next = &b;

    cout << a.val << endl;
    cout << a.next->val << endl;  // a.next is the address of 2nd group. -> access the value
    return 0;
}