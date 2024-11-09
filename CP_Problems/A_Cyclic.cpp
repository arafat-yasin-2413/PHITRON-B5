#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s = to_string(n);
    // cout << s[0] << " " << s[1] << " " << s[2] << endl;

    int n1 = s[0] - '0', n2 = s[1] - '0', n3 = s[2] - '0';

    // cout << n1 + n2 + n3 << endl;

    int num1 = 0;
    int b = n2, c = n3, a = n1;

    num1 += a * 1;
    num1 += c * 10;
    num1 += b * 100;

    // cout << num1 << endl;

    int num2 = 0;
    int c1 = n3, a1 = n1, b1 = n2;

    num2 += b * 1;
    num2 += a * 10;
    num2 += c * 100;

    cout << num1 << " " << num2 << endl;

    return 0;
}