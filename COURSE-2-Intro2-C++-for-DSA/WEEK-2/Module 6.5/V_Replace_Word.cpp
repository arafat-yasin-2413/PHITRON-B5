#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (s.find("EGYPT") != -1)
    {
        // cout << "loop a dhuklam" << endl;
        s.replace(s.find("EGYPT"), 5, " ");
    }

    cout << s << endl;

    return 0;
}