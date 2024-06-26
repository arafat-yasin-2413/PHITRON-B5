#include <bits/stdc++.h>
using namespace std;

void fun( int *&p)
{
    // cout<<p<<endl;
    // *p = 20;
    cout<<p<<endl;
    p = NULL;

}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);

    cout<<&ptr<<endl;
    cout<<"addrss of val "<<&val<<endl;
    cout<<*ptr<<endl;
    

    

    return 0;
}