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

void take_input(Node *&head, Node *&tail, string v)
{
    Node *newNode = new Node(v);
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

int size_of_list(Node *head)
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

bool search_webpage(Node *head, string v)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        if(temp->val == v)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void visit_webpage(Node *head, Node *&current, string st)
{
    // cout << "head er val = " << head->val << endl;
    // cout << "current er val = " << current->val << endl;
    // cout << "st = " << st << endl;
    // cout << "-------------------------------------------------" << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == st)
        {
            // cout << "finally " << st << " paisi" << endl;
            // cout << "ekhon current = " << current->val << endl;
            cout<<temp->val<<endl;
            current = temp;
            break;
        }
        temp = temp->next;
        // current = temp;
    }

    // cout << "while loop seshe current = " << current->val << endl;
}

// At last , এরর খুজে পেয়েছিলাম। আমার লজিকটাই কাজ করেছে। 
// current টাকে লুপের মাধ্যমে সামনে নেওয়ার জন্য TC 3,7 এ এরর খাচ্ছিলাম।


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node *current = NULL;/

    // list<string> myList;

    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            break;
        }
        take_input(head, tail, val);
        // myList.push_back(val);
    }
    Node *current = head;
    // print_list(head);

    // cout << "accessing current = " << current->val << endl;

    int q;
    cin >> q;

    while (q--)
    {
        string operation;
        cin >> operation;

        if (operation == "visit")
        {
            string st;
            cin >> st;

            // auto it = find(myList.begin(), myList.end(), st);
            // if (it != myList.end())
            // {
            //     // cout << "paisi" << endl;
            //     visit_webpage(head, current, st);
            //     // cout << "call korar por main func theke current er val = " << current->val << endl;
            // }
            // else
            // {
            //     cout<<"Not Available"<<endl;
            //     // cout << "painai" << endl;
            // }
            bool res = search_webpage(head,st);
            if(res)
            {
                visit_webpage(head,current,st);
            }
            else if(res == 0)
            {
                cout<<"Not Available"<<endl;
            }
        }

        else if (operation == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }
            else if (current->prev == NULL)
            {
                // cout << "Not Available , prev a jacchilam" << endl;
                cout<<"Not Available"<<endl;
            }
        }

        else if (operation == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else if (current->next == NULL)
            {
                // cout << "Not Available , next a jacchilam" << endl;
                cout<<"Not Available"<<endl;
            }
        }
    }

    return 0;
}

