// Question: Take a singly linked list as input and sort it in descending order. Then print the list.

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
    }
    tail->next = newNode;
    tail = newNode;
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

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

    cout << "Before sorting: ";
    print_linked_list(head);

    descending_sort(head);

    cout << endl
         << "After sorting: ";
    print_linked_list(head);

    return 0;
}