#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://atcoder.jp/contests/abc083/tasks/arc088_a

/*
Logic: 
x = 3, y = 20

i) 3 তার নিজের একটা গুনিতক, তার নিজের জন্য শুরুতেই cnt = 1;
ii) এরপর 3 কে 2 দিয়ে গুণ করলে হবে 6 , যা 20 এর চেয়ে ছোট , 
    এটার জন্য cnt++, এবং x এর ভ্যালু এখন 2 দিয়ে গুণ করে আপডেট
    করে দিতে হবে। তাহলে x = 6 হবে এখন;
iii) while লুপের কন্ডিশন চেক করতেছি প্রতিবার x*2 <= y হলে লুপের ভিতর
    ঢুকবো এবং cnt++ হবে। সেই সাথে x= 6*2 হবে। তো x এর ভ্যালু
    এখন 12. 

    এবার কন্ডিশন চেক করলে দেখা যাবে, 12*2 = 24, যা কিনা 
    y এর চেয়ে বড় হয়ে যাচ্ছে। তাহলে আমরা এখন আর লুপের 
    ভিতর ঢুকবো না। 

*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y;
    cin >> x >> y;

    ll cnt = 1;
    while (x * 2 <= y)
    {
        cnt++;
        x = x * 2;
    }
    cout << cnt << nl;

    return 0;
}