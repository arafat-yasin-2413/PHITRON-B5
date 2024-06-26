#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Capacity Functions
    /*
        1. s.size()
        2. s.max_size()
        3. s.capacity()
        4. s.clear()
        5. s.empty()
        6. s.resize(number,character)

    */

    // cin diye input nile amra line er moddhe space nite pari na
    // 
    // string s = "Hello World";

    string s;
    cin>>s;
    cout << "length = " << s.size() << endl;

    // s.resize(8);
    cout<<s<<endl;
    s.resize(4);
    cout<<s<<endl;
    // s.resize(6);
    s.resize(6,'f');
    cout<<s<<endl;

    return 0;
}