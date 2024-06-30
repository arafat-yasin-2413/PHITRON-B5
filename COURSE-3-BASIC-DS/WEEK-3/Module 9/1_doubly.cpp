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

void print_soja(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}

void print_ulta(Node *tail)
{
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }

}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    Node *tail = c;


    print_soja(head);
    cout<<endl;
    print_ulta(tail);
    

    return 0;
}