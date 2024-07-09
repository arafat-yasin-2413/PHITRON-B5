#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << endl;
}

void print_queue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << endl;
}

void same_stack_queue(stack<int> st, queue<int> q)
{
    bool flag = false;
    while (!st.empty())
    {
        int val1 = st.top();
        st.pop();
        int val2 = q.front();
        q.pop();

        if (val1 != val2)
        {
            flag = true;
            break;
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

int main()
{
    int n;
    cin >> n;
    stack<int> st1;
    int size_of_stack = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
        size_of_stack++;
    }

    int m;
    cin >> m;
    queue<int> q1;
    int size_of_queue = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
        size_of_queue++;
    }

    // print_stack(st1);
    // print_stack(st2);
    if(size_of_stack != size_of_queue)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        same_stack_queue(st1,q1);
    }
    

    return 0;
}