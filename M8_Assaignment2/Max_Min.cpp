
#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int val;
    Node* next;
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
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void find_max_min(Node* head) {
    Node* temp = head;
    int max = head->val;
    int min = head->val;

    while (temp != NULL) {
        if (temp->val < min) {
            min = temp->val;
        }
        if (temp->val > max) {
            max = temp->val;
        }
        temp = temp->next;
    }
    cout << max << " " << min;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_in_tail(head, tail, val);
    }

    find_max_min(head);

    return 0;
}