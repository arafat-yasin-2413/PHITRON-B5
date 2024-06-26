#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    *a = 100;
    cout << "fun : " << a << endl;
    return a;
}

int main()
{
    // new int ;
    // int *a = new int;
    // *a = 10;
    // delete a;

    // cout << *a << endl;

    int *ptr = fun();
    cout << "main : " << ptr << endl;
    cout << *ptr << endl;

    return 0;
}