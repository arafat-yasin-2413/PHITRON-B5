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


void check_palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = false;
    while (i != j && i->next != j)
    {
        if(i->val != j->val)
        {
            flag = true;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)
    {
        flag = true;
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



    // print_list(head);

    check_palindrome(head,tail);

    


    return 0;
}