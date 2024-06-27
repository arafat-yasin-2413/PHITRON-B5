#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head,Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_position(Node *&head,Node *&tail, int pos)
{
    Node *temp = head;
    if (pos == 0)
    {
        Node *delNode = head;
        head = head->next;
        delete delNode;
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }

    Node *delNode = temp->next;
    temp->next = delNode->next;
    if(temp->next == NULL)
    {
        tail = temp;
    }
    delete delNode;
}

int main()
{
    // insert at head 0
    // insert at tail 1
    // delete at pos 2

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head,tail, v);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            int sz = size_of_linked_list(head);
            if (v >= sz)
            {
                print_linked_list(head);
            }
            else
            {
                delete_at_position(head,tail, v);
                print_linked_list(head);
            }
        }
    }

    return 0;
}