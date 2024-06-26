#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char x;
    cin >> a >> x >> b;
    // cout << a << " " << x << " " << b << endl;

    if(x == '>')
    {
        if(a>b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }

    else if(x == '<')
    {
        if(a<b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }

    else if(x == '=')
    {
        if(a==b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }


    return 0;
}