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

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

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

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp==NULL)
        {
            cout<<"Invalid Index"<<endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted at Position " << pos << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Inserted At Head from specific function" << endl;
}

void delete_at_index(Node *head, int idx)
{
    Node *temp = head;
    for (int i = 1; i <= idx - 1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout<<"Invalid Index"<<endl;
            return;
        }
    }

    if(temp->next == NULL)
    {
        cout<<"Invalid Index. temp->next = null found"<<endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
    cout << "Deleted from idx " << idx << endl;
}

void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        cout<<"Head is not available"<<endl;
        return;
    }
    Node *delNode = head;
    head = delNode->next;
    delete delNode;
    cout << "Deleted from Head" << endl;
}

void size_of_linked_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<"Size of Linked List = "<<cnt<<endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << endl;
        cout << "Option 1 : Insert at tail" << endl; // done
        cout << "Option 2 : Insert at head" << endl; // done
        cout << "Option 3 : Insert at any position" << endl; // done
        cout << "Option 4 : Delete at head" << endl; // done
        cout << "Option 5 : Delete at any Index" << endl;
        cout << "Option 6 : Print the List" << endl;
        cout << "Option 7 : Size of Linked List" << endl;
        cout << "Option 8 : Terminate" << endl;
        int op;
        cout << "----------------" << endl;
        cout << "Enter Option : ";
        cin >> op;
        cout << "----------------" << endl;

        if (op == 1)
        {
            cout << "Enter a value : ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }

        else if (op == 2)
        {
            cout << "Enter a value : ";
            int val;
            cin >> val;
            insert_at_head(head, val);
        }

        else if (op == 3)
        {
            // insert at any position
            int pos;
            cout << endl
                 << "Enter Position : ";
            cin >> pos;
            cout << "Enter value : ";
            int val;
            cin >> val;
            if (pos == 1)
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
            cout << "Enter Index to Delete : ";
            int idx;
            cin >> idx;
            if (idx == 0)
            {
                delete_at_head(head);
            }
            else
            {
                delete_at_index(head, idx);
            }
        }

        else if (op == 6)
        {
            cout << endl
                 << "My Linked List: ";
            print_list(head);
            cout << endl;
        }

        else if(op == 7)
        {
            size_of_linked_list(head);
        }
        else if (op == 8)
        {
            break;
        }
    }

    return 0;
}