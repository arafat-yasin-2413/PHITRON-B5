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

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<=4; j++)
        {
            cout<<"i = "<<i<<" , j = "<<j<<endl;
            if(j == 3)
            {
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}