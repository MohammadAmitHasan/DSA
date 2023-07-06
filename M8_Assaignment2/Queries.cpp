#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int val;
    Node* next;  // next node address
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_in_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insert_in_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q, x, v;
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> x >> v;
        if (x == 0) {
            insert_in_head(head, tail, v);
        } else {
            insert_in_tail(head, tail, v);
        }
        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}