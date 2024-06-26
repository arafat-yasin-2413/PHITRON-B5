#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // cout << s << endl;
    stringstream ss(s);

    string x = "Jessica";
    string word;
    int flag = 0;
    while (ss >> word)
    {
        // cout << word << endl;
        if (word == x)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

