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

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    // cout<<temp->val<<endl;
    newNode->next = temp->next;
    temp->next = newNode;
}


void insert_at_head(Node *&head,int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node *head)
{

    Node *temp = head; 
    cout<<"My Linked List : ";
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}

int size_of_linked_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        temp = temp->next ;
        cnt++;
    }
    return cnt;
}

int main()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    Node *d = new Node (50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;


    print_linked_list(head);

    int pos,val;
    cout<<"Enter Position and Value : ";
    cin>>pos>>val;


    if(pos > size_of_linked_list(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head,val);
    }
    else 
    {
        insert_at_position(head,pos,val);
    }

    print_linked_list(head);

    return 0;
}