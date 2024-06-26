#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    char t[100];
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++) // for finding length
        len++;

    int j = len - 1;
    for (int i = 0; i < len; i++) // copying reverse way
    {
        t[j] = s[i];
        j--;
    }

    t[len] = '\0';
    int flag = 0;

    int i = 0;
    while (t[i] == '0') // skipping 0
    {
        i++;
    }

    for (; i < len; i++)
    {
        flag = 1;
        cout << t[i]; // printing
    }

    if (flag)
        cout << "\n"; // if there is all zero in input then we will not print this line.

    if (strcmp(s, t) == 0) // checking palindrome
        cout << "YES\n";
    else
        cout << "NO\n";
}