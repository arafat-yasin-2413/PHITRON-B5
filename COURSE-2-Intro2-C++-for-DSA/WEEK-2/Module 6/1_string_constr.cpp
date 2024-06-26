#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1.
    //  string s = "hello world";
    //  string s("hello world");

    // 2.
    //  string s("hello world", 4);

    // eivabe likhle index 4 er ager index gula dibe

    // 3.
    string a = "hello world";
    // string s(a,4);
    // eivabe onno string a rekhe 4 deuar karone index 4 er porer character gula dibe
    // direct string , 4 dile jei kaj korto eta tar biporit kaj kortese

    // 4.
    string s(6, 'A');
    // 6 ta A dibe, onekgula same character dorkar hoile eivabe likhte hobe

    cout << s << endl;

    return 0;
}