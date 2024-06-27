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

void remove_duplicate_node(Node *head)
{
    // Node *i = head;

    // while(i!=NULL)
    // {
    //     Node *j = i;
    //     while(j->next != NULL)
    //     {
    //         if(j->next->val == i->val)
    //         {
    //             Node *delNode = j->next;
    //             j->next = j->next->next;
    //             delete delNode;
    //         }

    //         else
    //         {
    //             j = j->next;
    //         }
    //     }
    //     i = i->next;
    // }
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL; )
        {
            if (i->val == j->next->val)
            {
                Node *delNode = j->next;
                j->next = delNode->next;
                delete delNode;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(head, tail, val);
    }

    remove_duplicate_node(head);
    print_linked_list(head);

    return 0;
}