#include <bits/stdc++.h>
using namespace std;

class minStack
{
public:
    stack<int> st;
    stack<int> minSt;

    minStack()
    {
    }

    void push(int num)
    {
        if (st.empty())
        {
            st.push(num);
            minSt.push(num);
            return;
        }
        int minimum_value = min(num, minSt.top());
        minSt.push(minimum_value);
        st.push(num);
    }

    int pop()
    {
        // Write your code here.
        if (!st.empty())
        {
            int x = st.top();
            st.pop();
            minSt.pop();

            return x;
        }
        return -1;
    }

    int top()
    {
        // Write your code here.
        if (st.empty())
        {
            return -1;
        }
        else
        {
            return st.top();
        }
    }

    int getMin()
    {
        if (!minSt.empty())
        {
            int x = minSt.top();
            // minSt.pop();
            return x;
        }

        return -1;
    }
};

int main()
{

    return 0;
}