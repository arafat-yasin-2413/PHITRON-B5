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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int v)
    {
        sz++;
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        // jodi list khali thake
        if (head == NULL)
        {
            return;
        }
        // jodi list khali na thake
        else
        {
            Node *delNode = head;
            head = head->next;
            sz--;
            delete delNode;
        }
    }

    int top()
    {
        return head->val;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int v)
    {
        sz++;
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        // jodi list khali thake
        if (head == NULL)
        {
            return;
        }
        // jodi list populated thake
        else
        {
            Node *delNode = head;
            head = head->next;
            sz--;
            delete delNode;
        }
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack st;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    myQueue q;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    // cout << endl;

    // while (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }

    int size_of_stack = st.sz;
    int size_of_queue = q.sz;

    bool flag = false;

    // cout << size_of_stack << endl;
    // cout << size_of_queue << endl;

    if (size_of_stack != size_of_queue)
    {
        cout << "NO" << endl;
    }

    else
    {
        while (!st.empty())
        {
            int val_from_stack = st.top();
            int val_from_queue = q.front();
            st.pop();
            q.pop();

            if (val_from_stack != val_from_queue)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}