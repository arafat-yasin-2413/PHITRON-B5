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

void print_middle_element(Node *head)
{
    int sz = size_of_linked_list(head);
    cout<<"Middle Elements are : ";
    if (sz % 2 != 0)
    {
        Node *temp = head;
        for (int i = 1; i <= ((sz / 2) - 1); i++)
        {
            temp = temp->next;
        }
        cout << temp->next->val << endl;
    }

    else if (sz % 2 == 0)
    {
        Node *temp = head;
        for (int i = 1; i <= ((sz / 2) - 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->next->val << " " << temp->next->next->val << endl;
    }
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

    cout << "My Linked List : ";
    print_linked_list(head);
    // cout << "Size of Linked List : " << size_of_linked_list(head) << endl;

    print_middle_element(head);

    return 0;
}