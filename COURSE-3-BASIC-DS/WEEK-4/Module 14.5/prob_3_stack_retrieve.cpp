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




int main()
{
    int n;
    cin >> n;
    stack<int> st1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    stack<int>st2;
    while(!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }

    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;


    
    

    return 0;
}