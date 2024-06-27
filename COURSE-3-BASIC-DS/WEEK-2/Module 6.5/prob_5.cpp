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

void insert_at_head(Node *&head, int v)
{
    // prothome notun ekta node banabo
    Node *newNode = new Node(v);
    // jodi head == null thake
    if (head == NULL)
    {
        // tahole ei newNode tai head hobe
        head = newNode;
        return;
    }
    // jodi populated list hoy
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    // head jodi null a thake
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // populated hoile
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void check_ascending_order(Node *head)
{
    int flag = 0;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "My Linked List : ";
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

int main()
{
    Node *head = NULL;
    cout << "Take input for Linked List : " << endl;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }

    // print_linked_list(head);
    // cout << "Size of Linked List : " << size_of_linked_list(head) << endl;
    check_ascending_order(head);

    return 0;
}