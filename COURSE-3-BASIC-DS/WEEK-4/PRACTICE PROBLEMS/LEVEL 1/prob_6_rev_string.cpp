#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    // cout<<st<<endl;

    stack<char>stc;
    for(char ch:st)
    {
        stc.push(ch);
    }

    while(!stc.empty())
    {
        cout<<stc.top();
        stc.pop();
    }

    


    return 0;
}