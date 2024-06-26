#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // getchar();
    cin.ignore();

    // vector<string> v;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     getline(cin, s);
    //     v.push_back(s);
    // }
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        getline(cin,v[i]);
    }

    for (string st : v)
    {
        cout << st << endl;
    }

    return 0;
}