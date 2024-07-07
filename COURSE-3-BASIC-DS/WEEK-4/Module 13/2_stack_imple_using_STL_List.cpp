#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> lst;

    void push(int val)
    {
        lst.push_back(val);
    }

    void pop()
    {
        lst.pop_back();
    }

    int top()
    {
        return lst.back();
    }

    int size()
    {
        return lst.size();
    }

    bool empty()
    {
        if (lst.size() == 0)
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
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}