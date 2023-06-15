// Question : Take two singly linked lists as input and check if their sizes are same or not .

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

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

int size(Node* head) {
    int counter = 0;
    Node* temp = head;
    while (temp != NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
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

    int s = size(head);  // O(n)

    Node* temp = head;

    if (s % 2 != 0) {
        for (int i = 0; i < (s / 2) + 1; i++) {  // O(n)
            if (i == (s / 2)) {
                cout << temp->val;
            }
            temp = temp->next;
        }
    } else {
        for (int i = 0; i < (s / 2) + 1; i++) {
            if (i == (s / 2) - 1 || i == s / 2) {
                cout << temp->val << " ";
            }
            temp = temp->next;
        }
    }

    return 0;
}