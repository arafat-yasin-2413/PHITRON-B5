#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void take_input(string st, Node *&head, Node *&tail)
{
    Node *newNode = new Node(st);
    if (head == NULL)
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
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool search_address(Node *head, string s)
{
    Node *temp = head;
    
    while (temp != NULL)
    {
        if (temp->val == s)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void visit_address(Node *head, Node *&current, string s)
{
    Node *temp = head;
    // Node *temp = current;
    while (temp != NULL)
    {
        if (temp->val == s)
        {
            cout << temp->val << endl;
            current = temp;
            break;
        }
        temp = temp->next;
    }
}

void go_previous(Node *&current)
{
    Node *temp = current;
    if (temp->prev != NULL)
    {
        temp = temp->prev;
        cout << temp->val << endl;
        current = temp;
    }
    else if (temp->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
}

void go_next(Node *&current)
{
    Node *temp = current;
    if (temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->val << endl;
        current = temp;
    }
    else if (temp->next == NULL)
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string st;
        cin >> st;
        if (st == "end")
        {
            break;
        }
        take_input(st, head, tail);
    }

    // print_list(head);

    Node *current = head;

    int q;
    cin >> q;
    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string des;
            cin >> des;

            if (search_address(head, des))
            {
                visit_address(head,current, des);
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if(command == "prev")
        {
            go_previous(current);
        }

        else if(command == "next")
        {
            go_next(current);
        }

        // cout << current->val << endl;
    }

    return 0;
}