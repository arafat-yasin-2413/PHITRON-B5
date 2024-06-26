#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
        Logic: 
        1. যদি কোনো ক্যারেক্টার লেটার হয় তাহলে আমরা সেটাকে প্রথমেই word হিসেবে কাউন্ট করে নিবো।
        2. এবং কোনো word এ যেহেতু এক্টির বেশি ক্যারেক্টার থাকতেই পারে তাই সেই word টির অন্যান্য ক্যারেক্টারের জন্যও যেন কাউন্ট++ করতে না পারে, 
        সেজন্য আমরা কাউন্ট কে ++ করার আগে একটা বুলিয়ান ভ্যারিয়েবল নিয়ে রেখেছি। আর শুরুতে আমরা ধরে নিচ্ছি যে কোনো ওয়ার্ড পাই নাই। 
        যখনই কোনো একটা লেটার পাবো তখনি (word_paisi = flase হলে) কাউন্ট++ করে দিবো। এবং এটা করার পর word_paisi = true করে দিতে হবে। 
        তা না করলে এই ওয়ার্ডের অন্য ক্যারেক্টারের জন্য কাউন্ট++ করে ফেলতে পারে। 
        3. আর যখন আমারা লেটার ছাড়া অন্য কিছু পাবো তখনও word_paisi=false করে দিবো।
    */



    string s;
    getline(cin, s);

    // cout<<s<<endl;

    int word_count = 0;

    bool word_paisi = false;
    for (char ch : s)
    {
        // cout<<ch<<endl;

        // letter hoile
        if ((ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z'))
        {
            if (word_paisi == false)
            {
                word_count++;
            }
            word_paisi = true;
        }

        // symbol hoile
        else
        {
            word_paisi = false;
        }
    }

    cout << word_count << endl;

    // cout << isalpha('#') << endl; // symbol hoile 0 dibe
    // cout << isalpha('H') << endl; // capital hoile 1 dibe
    // cout << isalpha('h') << endl; // small hoile 2 dibe

    return 0;
}