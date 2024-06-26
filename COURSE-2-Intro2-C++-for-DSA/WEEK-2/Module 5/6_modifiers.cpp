#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Modifiers Functions
    /*
        1. s1 += s2
        2. s1.append(s2)
        3. s.push_back()
        4. s.pop_back()
        5. s1 = s2
        6. s.assign()
        7. s.erase()
        8. s.replace()
        9. s.insert()


    */



    // concatenation
    string a = "Hello";
    string b = "world";

    /*
        a += b and a.append(b) both works the same thing
        
    */


    // a+= b;
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;

    // a = "HelloA"; // works
    // a = a+b;

    // a[5] = 'A'; // don't work
    
    a.push_back('G'); // works

    a.pop_back();
    cout<<a<<endl;


    return 0;
}