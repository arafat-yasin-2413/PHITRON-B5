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

void take_SLL_input(Node *&head, Node *&tail, int v)
{
    // age ekta notun node banai
    Node *newNode = new Node(v);
    // shurutei kono node nai
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // ekhon to node ache. taile notun node gula ke shudhu tail er next a set kore dibo
    tail->next = newNode;
    // update tail
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

void print_reverse_of_SLL(Node *n)
{
    if(n == NULL)
    return;
    print_reverse_of_SLL(n->next);
    cout<<n->val<<" ";
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter values for LL : ";
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_SLL_input(head, tail, val);
    }
    cout<<"Original List : ";
    print_linked_list(head);
    cout<<"Reversed List : ";
    print_reverse_of_SLL(head);

    


    return 0;
}