#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, z;

    cin >> x >> y >> z;

    double original_price = (x * 100) / (100 - y);
    double profit = (z * original_price) / 100;

    double profitable_price = profit + original_price;
    cout << fixed << setprecision(2) << profitable_price << endl;

    return 0;
}