#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;

    // string::iterator it;

    // for (string:: iterator it = s.begin(); it < s.end(); it++)
    // for (it = s.begin(); it < s.end(); it++)
    for(auto it=s.begin(); it<s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}