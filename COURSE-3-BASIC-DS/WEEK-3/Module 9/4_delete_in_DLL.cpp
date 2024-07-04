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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size_of_linked_list(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insert_at_head(head, val);
    }

    else if (pos == size_of_linked_list(head))
    {
        insert_at_tail(head, tail, val);
    }

    else if (pos > size_of_linked_list(head))
    {
        cout << "Invalid Index" << endl;
    }

    else
    {
        Node *newNode = new Node(val);

        Node *temp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next->prev = newNode;
    }
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *delNode = head;
    head = head->next;
    if(head == NULL)
    delete delNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_at_tail(Node *&head,Node *&tail)
{
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = delNode->next;
    temp->next->prev = temp;
    delete delNode;
}

int main()
{
    // just written the functions. not ready for operations.

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

    Node *tail = c;

    print_linked_list(head);
    insert_at_position(head, tail, 0, 56);
    print_linked_list(head);

    return 0;
}