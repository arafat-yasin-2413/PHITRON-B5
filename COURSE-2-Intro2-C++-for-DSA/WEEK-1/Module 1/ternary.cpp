#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    // condition ? True : False
    int n;
    cin >> n;

    // if(n%2 == 0)
    // {
    //     cout << "Even" <<endl;
    // }
    // else
    // {
    //     cout<<"Odd"<<endl;
    // }

    (n%2==0) ? cout<<"Even"<<endl : cout<<"Odd"<<endl;

    return 0;
}