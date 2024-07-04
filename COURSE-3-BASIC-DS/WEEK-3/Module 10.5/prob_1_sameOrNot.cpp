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


void check_same_to_same(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = false;
    while(temp1!=NULL)
    {
        if(temp1->val != temp2->val)
        {
            flag = true;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}



int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        take_input(head1,tail1,val);
    }


    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        take_input(head2,tail2,val);
    }
    

    print_list(head1);
    print_list(head2);


    int sz1 = size_of_list(head1);
    int sz2 = size_of_list(head2);

    if(sz1!=sz2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        check_same_to_same(head1,head2);
    }


    return 0;
}