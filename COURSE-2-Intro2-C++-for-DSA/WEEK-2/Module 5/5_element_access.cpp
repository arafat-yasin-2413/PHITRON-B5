#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Element Access
    /*
        1. s[i]  -> i-th index
        2. s.at(i)
        3. s.front()
        4. s.back()
    */

    string s;
    cin>>s;

    cout<<s[0]<<endl;
    cout<<s.at(2)<<endl;
    cout<<s.back()<<endl;
    cout<<s.front()<<endl;

    return 0;
}