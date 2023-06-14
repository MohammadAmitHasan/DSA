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
    // Node head(10);
    Node* head = new Node(10);
    Node* a = new Node(20);

    // (*head).next = a;
    head->next = a;  // a is dynamic hence a pointer
    cout << head->next->val;
    cout << (*head).next->val;
    return 0;
}