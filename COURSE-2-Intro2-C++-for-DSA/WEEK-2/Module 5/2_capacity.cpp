#include<bits/stdc++.h>
using namespace std;

int main()
{
    // সি++ এ string হচ্ছে একটা ক্লাস। এই ক্লাসের Built-in মেথড গুলোকে অব্জেক্টের নামের পর ডট(.) দিয়ে অ্যাক্সেস করা যায়।

    // Capacity Functions
    /*
        1. s.size()
        2. s.max_size()
        3. s.capacity()
        4. s.clear()
        5. s.empty()
        6. s.resize(number,character)

    */
    

    string s="abcdef ghij";
    cout<<"size(length is) = "<<s.size()<<endl;
    cout<<"max_size = "<<s.max_size()<<endl;
    // vs code এ নরমালি ম্যাক্স সাইজ 10^9 আসছে।

    cout<<endl;

    string s2="mango apple pineapple nuts";
    cout<<"capacity of s2 = "<<s2.capacity()<<endl;
    cout<<"length of s2 = "<<s2.size()<<endl;

    s2 = "muchkiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
    cout<<"capacity of s2 = "<<s2.capacity()<<endl;

    cout<<"length of s2 = "<<s2.size()<<endl;





    return 0;
}