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

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {  // Complexity O(n)
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_head(Node*& head) {  // Complexity O(1)
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {  // Complexity O(n)
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_node(Node*& head, int pos) {
    Node* temp = head;
    if (pos == 0) {
        delete_head(head);
    } else {
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    int pos;
    cin >> pos;

    if (pos >= size(head)) {
        cout << endl
             << "Invalid index";
    } else {
        delete_node(head, pos);
    }

    cout << endl;

    print_linked_list(head);

    return 0;
}