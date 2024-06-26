#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Modifiers Functions
    /*
        1. s.erase(index)
            s.erase(start,number of character)

        2. s.replace()

        3. s.insert()
    */

    string s = "HelloWorld";
    // s.erase(3);
    // s.erase(3,2);


    // s.replace(4,3,"sorttt");

    s.insert(4,"Rahat");
    cout << s << endl;


    return 0;
}