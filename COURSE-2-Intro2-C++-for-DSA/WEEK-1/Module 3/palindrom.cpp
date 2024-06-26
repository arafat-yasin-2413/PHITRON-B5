#include <bits/stdc++.h>
using namespace std;

/* Solved By Minhajul Abedin Adil Vaiya
প্রথমে এই পুরা প্রবলেম টা স্ট্রিং এ করার চেষ্টা করেন , প্রথমে নাম্বার টা একটা স্ট্রিং এ ইনপুট নিবেন। যেহেতু প্রিন্ট করার সময় আমরা কোন ট্রেইলিং ০ প্রিন্ট করবো না তাই লাস্ট এর দিক থেকে একটি লুপ চালিয়ে লাস্ট এ কতটুকু জিরো আছে ঐ পজিশন বের করে নিবেন। এরপর ঐ পজিশন থেকে ব্যাকওয়ারড আরেকটি লুপ চালিয়ে পুরো জিনিসটি রিভার্সে প্রিন্ট করে নিন। এরপর বাকিটা তো একদম সহজ আমরা পুরা স্ট্রিং টা প্যালিন্ড্রোম কিনা চেক করে দেখবো

ভাইয়া, 10^7 রাখার জন্য ক্যারেক্টার অ্যারের সাইজ কত নিবো ?

10^7 মানে হলো 10000000 যেখানে টোটাল ৮ টি ডিজিট , সুতারাং ৯ সাইজের একটা ক্যারেক্টার এরে যথেষ্ট।


1 0 0 0 0 0 0 0
0 1 2 3 4 5 6 7


1 3 6 0 5 0 0 0
0 1 2 3 4 5 6 7


13605000
*/

int main()
{
    char ar[8];
    cin >> ar;
    // cout<<ar<<endl;

    // cout<<"length = "<<strlen(ar)<<endl;

    int i;
    for (i = strlen(ar) - 1; i >= 0; i--)
    {
        if (ar[i] != '0')
        {
            break;
        }
    }
    int right_non_zero = i;
    // cout<<right_non_zero<<endl;

    for (int j = right_non_zero; j >= 0; j--)
    {
        cout << ar[j];
    }

    cout << endl;

    // palindrome check

    int left = 0;
    int right = strlen(ar) - 1;

    int flag = 0;
    while (left < right)
    {
        if (ar[left] != ar[right])
        {
            flag = 1;
        }
        left++;
        right--;
    }

    if (flag == 1)
    {
        cout << "NO" << endl;
    }

    else if (flag == 0)
    {
        cout << "YES" << endl;
    }

    return 0;
}
