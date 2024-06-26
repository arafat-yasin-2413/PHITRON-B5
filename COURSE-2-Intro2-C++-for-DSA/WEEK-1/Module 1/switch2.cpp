#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch(x%2)
    {
        case 0:
            cout<<"n is Even" <<endl;
            break;
        case 1:
            cout<<"n is Odd" <<endl; 
    }

    return 0;
}