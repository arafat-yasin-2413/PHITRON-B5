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
    Node *head1 = NULL;
    Node *tail1 = NULL;
    cout << "Enter values for 1st List : ";
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_SLL_input(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    cout << "Enter values for 2nd List : ";
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_SLL_input(head2, tail2, val);
    }

    cout << "1st Linked List : ";
    print_linked_list(head1);
    // cout << "Size of 1st LL : " << size_of_linked_list(head1);
    int sz1 = size_of_linked_list(head1);

    // cout << endl;
    cout << "2nd Linked List : ";
    print_linked_list(head2);
    // cout << "Size of 2nd LL : " << size_of_linked_list(head2);
    int sz2 = size_of_linked_list(head2);

    if(sz1 == sz2)
    {
        cout<<"YES"<<endl;
    }
    else if(sz1 != sz2)
    {
        cout<<"NO"<<endl;
    }



    return 0;
}