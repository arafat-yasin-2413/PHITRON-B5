#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    float c;
    cin >> a >> b >> c;

    int d, e;
    float f;
    cin >> d >> e >> f;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << ((b * 1.0) * c) + ((e * 1.0) * f) << endl;

    return 0;
}