#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string word;
    cin >> word;

    int count = 0;
    stringstream ss(s);
    string single_word;

    while (ss >> single_word)
    {
        if (single_word == word)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}