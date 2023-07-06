#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int val;
    Node *next;  // next node address
    Node *prev;  // previous node address
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int count_size(Node *head) {
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_in_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_in_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insert_at_any_position(Node *head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void print_normal(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void print_reverse(Node *tail) {
    Node *tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;

    cin >> q;

    for (int i = 0; i < q; i++) {
        int link_size = count_size(head);
        int position, value;
        cin >> position >> value;

        if (position > link_size) {
            cout << "Invalid" << endl;
        } else {
            if (position == 0) {
                insert_in_head(head, tail, value);
            } else if (position == link_size) {
                insert_in_tail(head, tail, value);
            } else {
                insert_at_any_position(head, position, value);
            }
            cout << "L -> ";
            print_normal(head);
            cout << endl
                 << "R -> ";
            print_reverse(tail);
            cout << endl;
        }
    }

    return 0;
}