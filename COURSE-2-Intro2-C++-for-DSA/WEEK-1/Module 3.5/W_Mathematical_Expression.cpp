#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c;
    char x, y;

    cin >> a >> x >> b >> y >> c;
    // cout << a << " " << x << " " << b << " " << y << " " << c << endl;

    if(x == '+')
    {
        if(a+b == c)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<a+b<<endl;
        }
    }

    else if(x == '-')
    {
        if(a-b == c)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<a-b<<endl;
        }
    }

    if(x == '*')
    {
        if(a*b == c)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<a*b<<endl;
        }
    }

    return 0;
}