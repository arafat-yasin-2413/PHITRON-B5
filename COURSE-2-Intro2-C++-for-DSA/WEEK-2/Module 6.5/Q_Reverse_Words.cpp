#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout<<s<<endl;

    stringstream ss(s);

    string word;

    ss >> word;
    for (int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }

    while (ss >> word)
    {
        cout<<" ";
        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
    }

    return 0;
}