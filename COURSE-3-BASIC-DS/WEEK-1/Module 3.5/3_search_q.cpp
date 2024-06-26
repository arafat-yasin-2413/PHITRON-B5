#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
    Array input নিতে লেগেছে n
    এরপর sort করেছে সেইখানে nlogn লেগেছে।
    এরপর query তে q বার লুপ চলতেছে সেইখানে binary search করা হচ্ছে সেইখানে logn লেগছে তাহলে query এর লুপের জন্য লেগেছে qlogn
    O(n+nlogn+qlogn) এইখানে থেলে যেইটা বড় সেইটা time complexity
    */

    int n, q;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            // cout << "mid = " << mid << endl;
            if (ar[mid] == x)
            {
                flag = 1;
                break;
            }
            if (x < ar[mid])
            {
                r = mid - 1;
            }
            else if (x > ar[mid])
            {
                l = mid + 1;
            }
        }
        // cout << flag << endl;
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}