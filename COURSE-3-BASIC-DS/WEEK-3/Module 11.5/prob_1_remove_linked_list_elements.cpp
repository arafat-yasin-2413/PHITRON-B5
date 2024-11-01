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

void take_input(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout<<"Take Input : ";
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
    print_linked_list(head);


    

    return 0;
}