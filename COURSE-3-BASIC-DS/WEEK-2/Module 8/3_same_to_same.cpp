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

void take_input(Node *&head, Node *&tail, int v)
{
    // notun node banabo
    Node *newNode = new Node(v);
    // head null a kina
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // populated list hoile
    tail->next = newNode;
    tail = newNode;
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

void same_to_same(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    int flag = 0;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = 1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (flag == 1)
    {
        cout << "NO" << endl;
    }

    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(head2, tail2, val);
    }

    int sz1 = size_of_linked_list(head1);
    int sz2 = size_of_linked_list(head2);

    if (sz1 != sz2)
    {
        cout << "NO" << endl;
    }
    else
    {
        same_to_same(head1, head2);
    }

    return 0;
}