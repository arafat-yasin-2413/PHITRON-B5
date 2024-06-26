#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // cout<<s<<endl;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // eirokom for loop shudhu matro C++ er kichu built-in class er upor kaj kore. 
    // jemon string class er upor kaj kortese. 
    // C er kono int array ba character array er upor ei Range Based For loop kaj kore na.
    // eikhane s string theke amra prottekta character nite chacchi. eijonno datatype char neua hoyeche.
    // Range based for loop diye index pawa jabe na. 
    // index dorkar na hoile eita use kora jabe.
    // index paite hoile ager moto normal for loop chalaite hobe.
    for (char ch : s)
    {
        cout << ch << endl;
    }
    cout << endl;

    return 0;
}