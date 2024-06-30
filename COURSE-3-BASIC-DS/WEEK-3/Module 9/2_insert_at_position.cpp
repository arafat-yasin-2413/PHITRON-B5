#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_linked_list(Node *head )
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;

    Node *tail = d;


    print_linked_list(head);
    insert_at_position(head,4,56);
    print_linked_list(head);   

    return 0;
}