#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "hello";
    // s1 = "gello";
    string s2 = "hello";
    
    // C++ এ string হচ্ছে একটা ক্লাস। সি তে শিখে আসা ... 
    // strcmp() এখানে কাজ করবে না। কারণ strcmp() ফাংশন প্যারামিটার হিসেবে ক্যারেক্টার অ্যারে নেয়। 
    // আমরা  সি++ এ সরাসরি নরমাল ভ্যারিয়েবলের মতো করে স্ট্রিং কে কম্পেয়ার করতে পারি। 
    
    
    
    // cout<<s1<<endl;
    // cout<<s1.size()<<endl;


    if(s1==s2)
    {
        cout<<"Both strings are same"<<endl;
    }
    else
    {
        cout<<"Bothe strings are not same"<<endl;
    }

    return 0;
}