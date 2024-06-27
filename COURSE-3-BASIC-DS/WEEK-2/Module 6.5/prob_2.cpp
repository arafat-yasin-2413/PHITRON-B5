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
    // head jodi null a thake
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // populated hoile
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void check_duplicacy(Node *head)
{
    Node *temp = head;
    vector<int> freq(101, 0);
    while (temp != NULL)
    {
        // int val = temp->val;
        freq[temp->val]++;
        temp = temp->next;
    }

    int flag = 0;
    for (int cnt : freq)
    {
        // if(cnt!=0)
        // {
        //     cout<<cnt<<endl;
        // }
        if (cnt > 1)
        {
            flag = 1;
        }
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    Node *head = NULL;
    cout << "Take input for Linked List : " << endl;
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

    // cout << "My Linked List : ";
    // print_linked_list(head);
    // cout << "Size of Linked List : " << size_of_linked_list(head) << endl;

    check_duplicacy(head);

    return 0;
}