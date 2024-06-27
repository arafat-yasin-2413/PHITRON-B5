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

void insert_at_head(Node *&head,int v)
{
    // prothome notun ekta node banabo
    Node *newNode = new Node(v);
    // jodi head == null thake
    if(head == NULL)
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

void insert_at_postion(Node *head, int pos, int v)
{
    // prothome notun node to baniye rakhi
    Node *newNode = new Node(v);
    Node *temp = head;
    for(int i=1;i<=pos-1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout<<"Invalid Index inside for loop"<<endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
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

    int q;
    cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos == 0)
        {
            insert_at_head(head,val);
            print_linked_list(head);
        }
        else
        {
            insert_at_postion(head,pos,val);
            print_linked_list(head);
        }
    }

    return 0;
}