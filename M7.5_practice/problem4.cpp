// Question: Take a singly linked list as input, then print the maximum value of them.

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

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int find_maximum(Node* head) {
    Node* temp = head;
    int max = head->val;

    while (temp != NULL) {
        if (temp->val > max) {
            max = temp->val;
        }
        temp = temp->next;
    }
    return max;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {  // O(n)
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }

    int maximum = find_maximum(head);
    cout << maximum;

    return 0;
}