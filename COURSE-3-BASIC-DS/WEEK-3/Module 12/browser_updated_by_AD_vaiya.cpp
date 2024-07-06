#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void take_input(Node *&head, Node *&tail, string v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool search_webpage(Node *head, string v) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp->val == v) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void visit_webpage(Node *head, Node *&current, string st) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp->val == st) {
            cout << temp->val << endl;
            current = temp;
            return;
        }
        temp = temp->next;
    }
}

// At last , এরর খুজে পেয়েছিলাম। আমার লজিকটাই কাজ করেছে। 
// current টাকে লুপের মাধ্যমে সামনে নেওয়ার জন্য TC 3,7 এ এরর খাচ্ছিলাম।


int main() {
    Node *head = NULL;
    Node *tail = NULL;

    while (true) {
        string val;
        cin >> val;
        if (val == "end") {
            break;
        }
        take_input(head, tail, val);
    }

    Node *current = head;

    int q;
    cin >> q;

    while (q--) {
        string operation;
        cin >> operation;

        if (operation == "visit") {
            string st;
            cin >> st;

            if (search_webpage(head, st)) {
                visit_webpage(head, current, st);
            } else {
                cout << "Not Available" << endl;
            }
        }

        else if (operation == "prev") {
            if (current->prev != NULL) {
                current = current->prev;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }

        else if (operation == "next") {
            if (current->next != NULL) {
                current = current->next;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
