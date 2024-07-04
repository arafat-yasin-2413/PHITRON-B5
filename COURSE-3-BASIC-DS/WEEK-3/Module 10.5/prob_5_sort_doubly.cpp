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

void take_input(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_list(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size_of_list(Node *head)
{
    Node *temp = head;
    int cnt=0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void sort_in_ascending_order(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
            // cout<<i->val<<" "<<j->val<<endl;
        }
        // cout<<endl;
    }
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


    
    print_list(head);
    sort_in_ascending_order(head);
    print_list(head);
    

    


    return 0;
}