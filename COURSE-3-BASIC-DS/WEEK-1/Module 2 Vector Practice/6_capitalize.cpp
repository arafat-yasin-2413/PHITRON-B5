#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++)
    {
        string str = v[i];
        str[0] = str[0] - 32;
        cout << str << endl;
    }

    return 0;
}