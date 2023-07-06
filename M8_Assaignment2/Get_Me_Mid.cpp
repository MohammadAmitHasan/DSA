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
        return;
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

void descending_sort(Node* head) {
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i; j != NULL; j = j->next) {
            if (i->val < j->val) {
                swap(i->val, j->val);
            }
        }
    }
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

    int s = size(head);

    descending_sort(head);

    Node* temp = head;

    if (s % 2 != 0) {
        for (int i = 0; i < (s / 2) + 1; i++) {
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