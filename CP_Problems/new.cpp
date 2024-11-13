#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    cout << a * b << endl;

    string s = "922";
    int n = 15;
    reverse(s.begin(), s.end());

    int carry = 0;
    string res;
    for (int i = 0; i < s.size(); i++)
    {
        int d1 = s[i] - '0';
        int product = n * d1;

        int sum = product + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        res.push_back(output_digit + '0');
    }

    while (carry != 0)
    {
        int d = carry % 10;
        carry = carry / 10;
        res.push_back(d + '0');
    }

    reverse(res.begin(), res.end());

    cout << res << endl;

    return 0;
}