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

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
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
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }

    // 2nd linked list
    Node* head2 = NULL;
    Node* tail2 = NULL;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head2, tail2, val);
    }

    if (size(head) == size(head2)) {
        cout << "YES";
    } else
        cout << "NO";

    return 0;
}