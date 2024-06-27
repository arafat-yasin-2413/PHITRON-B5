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
    if(head == NULL)
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
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void get_difference(Node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    Node *temp = head;
    while(temp!=NULL)
    {
        if(temp->val < mn)
        {
            mn = temp->val;
        }

        if(temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }

    // cout<<"maximum = "<<mx<<endl;
    // cout<<"minimum = "<<mn<<endl;

    cout<<mx-mn<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        take_input(head,tail,val);
    }

    // print_linked_list(head);
    get_difference(head);

    return 0;
}