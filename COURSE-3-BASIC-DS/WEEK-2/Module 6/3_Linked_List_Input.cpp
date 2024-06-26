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


    if (head == NULL)
    {
        head = newNode;
        cout << v << " inserted at head" << endl;
        return;
    }


    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << v << " inserted at tail" << endl;
}




void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}




int main()
{
    Node *head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    cout<<"My Linked List : ";
    print_list(head);
    cout<<endl;
    cout<<"Hello"<<endl;


    return 0;
}
