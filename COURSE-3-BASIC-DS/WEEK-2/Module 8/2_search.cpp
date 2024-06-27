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

void take_input(Node *&head, Node *&tail, int v)
{
    // notun node banabo
    Node *newNode = new Node(v);
    // head null a kina
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // populated list hoile
    tail->next = newNode;
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

void search_value(Node *head, int x)
{
    Node *temp = head;
    int idx = 0;
    bool is_found = false;
    while (temp != NULL)
    {
        if (temp->val != x)
        {
            idx++;
        }
        if (temp->val == x)
        {
            is_found = true;
            break;
        }
        temp = temp->next;
    }

    if (is_found == true)
    {
        cout << idx << endl;
    }

    else
    {
        cout << -1 << endl;
    }

    // Node *temp = head;
    // int x_found = 0;
    // while (temp != NULL)
    // {
    //     if (temp->val == x)
    //     {
    //         x_found = 1;
    //     }
    //     temp = temp->next;
    // }

    // // cout << "x_found = " << x_found << endl;
    // if (x_found == 0)
    // {
    //     cout << -1 << endl;
    // }

    // else if (x_found == 1)
    // {
    //     Node *temp2 = head;
    //     int idx = 0;
    //     while (temp2 != NULL)
    //     {
    //         if (temp2->val != x)
    //         {
    //             idx++;
    //         }
    //         if (temp2->val == x)
    //         {
    //             break;
    //         }
    //         temp2 = temp2->next;
    //     }
    //     // cout << "idx = " << idx << endl;
    //     cout << idx << endl;
    // }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }
            take_input(head, tail, val);
        }

        int x;
        cin >> x;
        search_value(head, x);
    }

    return 0;
}