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

void compare_linked_list(Node* head, Node* head2) {
    Node* temp = head;
    Node* temp2 = head2;

    if (size(head) != size(head2)) {
        cout << "NO";
    } else {
        bool same = true;
        while (temp != NULL) {
            if (temp->val != temp2->val) {
                same = false;
                break;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        if (same) {
            cout << "YES";
        } else
            cout << "NO";
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

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_in_tail(head2, tail2, val);
    }

    compare_linked_list(head, head2);

    return 0;
}