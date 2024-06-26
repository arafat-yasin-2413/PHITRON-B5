#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 25;
    void hello()
    {
        cout << "Rakib namespace" << endl;
    }
}

namespace ratul
{
    int age = 40;
    void hello()
    {
        cout << "Ratul namespace" << endl;
    }
}

using namespace Rakib;
int main()
{
    cout << age << endl;
    hello();

    ratul::hello();
    cout << ratul::age << endl;

    return 0;
}