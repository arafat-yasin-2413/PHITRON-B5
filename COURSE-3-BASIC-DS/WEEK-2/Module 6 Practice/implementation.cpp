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

void insert_at_head(Node *&head, int v)
{
    // prothome node banabo
    Node *newNode = new Node(v);
    // head jodi null a thake
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // populated list
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int v)
{
    // prothome ekta notun node banabo
    Node *newNode = new Node(v);
    // head jodi null a thake
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // populated list
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_position(Node *head, int pos, int v)
{
    // prothome ekta notun node banabo
    Node *newNode = new Node(v);

    // traverse korbo
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index inside for loop" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_at_head(Node *&head)
{
    // jodi head null a thake
    if (head == NULL)
    {
        cout << "Nothing to delete. Head is pointing at NULL" << endl;
        return;
    }
    // jodi populated list hoy
    Node *delNode = head;
    head = delNode->next;
    delete delNode;
}

void delete_at_tail(Node *&head)
{
    // check if the list is empty
    if(head == NULL)
    {
        return;
    }
    // jodi matro 1 tai node thake
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    // traverse korte hobe
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    cout<<"bortoman temp = "<<temp->val<<endl;
    Node *delNode = temp->next;
    temp->next = NULL;
    delete delNode;
}

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index inside for loop" << endl;
            return;
        }
    }

    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
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

int size_of_linked_list(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    cout << "Take Input for Linked List : " << endl;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }

    while (true)
    {
        cout << endl;
        cout << "Option 1 : Insert At Head" << endl;
        cout << "Option 2 : Insert At Tail" << endl;
        cout << "Option 3 : Insert At Position" << endl;
        cout << "Option 4 : Delete At Head" << endl;
        cout << "Option 5 : Delete At Tail" << endl;
        cout << "Option 6 : Delete At Position" << endl;
        cout << "Option 7 : Print Linked List" << endl;
        cout << "Option 8 : Size Of the Linked List" << endl;
        cout << "Option 9 : Terminate" << endl;

        cout << "---------------" << endl;
        cout << "Enter Option : ";
        int op;
        cin >> op;
        cout << "---------------" << endl;

        if (op == 1)
        {
            int val;
            cout << "Enter Value : ";
            cin >> val;
            insert_at_head(head, val);
        }

        else if (op == 2)
        {
            int val;
            cout << "Enter Value : ";
            cin >> val;
            insert_at_tail(head, val);
        }

        else if (op == 3)
        {
            cout << "Enter Postion(index) : ";
            int pos;
            cin >> pos;
            cout << "Enter Value : ";
            int val;
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }

        else if (op == 4)
        {
            delete_at_head(head);
        }

        else if (op == 5)
        {
            delete_at_tail(head);
        }

        else if (op == 6)
        {
            int pos;
            cout << "Enter position(index) : ";
            cin >> pos;
            if (pos == 0)
            {
                delete_at_head(head);
            }
            else
            {
                delete_at_position(head, pos);
            }
        }

        else if (op == 7)
        {
            cout << "My Linked List : ";
            print_linked_list(head);
        }

        else if (op == 8)
        {
            cout << "Size of Linked List : " << size_of_linked_list(head) << endl;
        }

        else if (op == 9)
        {
            break;
        }
    }

    return 0;
}