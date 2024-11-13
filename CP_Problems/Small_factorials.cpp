#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2


void multiply(vector < int > & a, int no, int & size)
{

    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = a[i] * no + carry;
        a[i] = product % 10;
        carry = product / 10;
    }

    while (carry != 0)
    {
        a[size] = carry % 10;
        carry = carry / 10;
        size = size + 1;
    }

}
void smallFactorial(int n)
{
    vector < int > a(1000, 0);

    a[0] = 1;

    int size = 1;

    for (int i = 2; i <= n; i++)
    {
        multiply(a, i, size);
    }

    // print the result in reverse order
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {


        int n;
        cin >> n;

        smallFactorial(n);

    }


    return 0;
}