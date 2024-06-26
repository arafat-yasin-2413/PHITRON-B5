#include<bits/stdc++.h>
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

    string s="hello";
    s.clear();

    // if(s.empty())
    if(s.empty() == true)
    {
        cout<<"Empty"<<endl;
    }

    else 
    {
        cout<<"Not Empty"<<endl;
    }
    return 0;
}